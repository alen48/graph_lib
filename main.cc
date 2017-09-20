#include "graph.h"
#include "main.h"

int main()
{
	Graph g(UNDIRECTED);
	gSpace::Vertex v1 = gSpace::Vertex("Bombay");
//	gSpace::Vertex *vp1 = &v1;
	gSpace::Vertex v2 = gSpace::Vertex("Delhi");
//	gSpace::Vertex *vp2 = &v2;
//	GraphType gType = UNDIRECTED;
	g.addEdge(v1, v2, 100);
	logFile << "Edge added between " << v1.getName() << " and " << v2.getName() << "\n";
	g.insert(v1);
	g.insert(v2);
	outFile << "Type: " << g.getType() << "\n";
	outFile << "Number of vertices: " << g.numVertices() << "\n";
	outFile << "Number of edges: " << g.numEdges() << "\n";
	closeAll();
	return 0;
}
