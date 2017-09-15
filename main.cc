#include "graph.h"

int main()
{
	Graph g;
	gSpace::Vertex v1 = gSpace::Vertex("Bombay");
	gSpace::Vertex *vp1 = &v1;
	gSpace::Vertex v2 = gSpace::Vertex("Delhi");
	gSpace::Vertex *vp2 = &v2;
	v1.addEdge(vp2, 100);
	g.insert(vp1);
	g.insert(vp2);		
	std::cout << "Number of vertices: " << g.numVertices();
	std::cout << "Number of edges: " << g.numEdges();
}
