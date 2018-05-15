/*
 * File: main.c
 * ------------
 * This is a driver code to test different functionalities. 
 */

#include "graph.h"
#include "main.h"

int main()
{
	Graph g(UNDIRECTED);
	gSpace::Vertex v1 = gSpace::Vertex("Bombay");
	gSpace::Vertex v2 = gSpace::Vertex("Delhi");
	g.addEdge(v1, v2, 100, 0);
//	g.addEdge("Culcutta", "Madras", 200, 0);
	logFile << "Edge added between " << v1.getName() << " and " << v2.getName() << "\n";

	outFile << "Type: " << g.getType() << "\n";
	outFile << "Number of vertices: " << g.numVertices() << "\n";
	outFile << "Number of edges: " << g.numEdges() << "\n";
	closeAll();
	return 0;
}
