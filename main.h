#include <fstream>

std::ofstream logFile("logs");
std::ofstream outFile("outputs");

void closeAll()
{
	logFile.close();
	outFile.close();
}
