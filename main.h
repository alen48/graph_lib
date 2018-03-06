/*
 * File: main.h
 * ------------
 * This file includes all headers required to execute main.cc successfully.
 */

#ifndef _main_h_
#define _graph_h_

#include <fstream>
std::ofstream logFile("logs");
std::ofstream outFile("outputs");

void closeAll()
{
	logFile.close();
	outFile.close();
}

#endif
