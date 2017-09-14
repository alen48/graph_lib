#include "graph.h"

int main()
{
	Graph g;
	Vertex v1 = Vertex("Bombay");
	Vertex *vp1 = &v1;
	Vertex v2 = Vertex("Delhi");
	Vertex *vp2 = &v2;
	v1.addEdge(vp2, 100);
	g.insert(vp1);
	g.insert(vp2);		
}
