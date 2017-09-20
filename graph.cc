#include "graph.h"

void Graph::addEdge(gSpace::Vertex& u, gSpace::Vertex& v, int dist)
{
	gSpace::Edge newEdge(u, v, dist);
	edges.push_back(newEdge);
	if (type == UNDIRECTED) {
		gSpace::Edge revEdge(v, u, dist);
		edges.push_back(revEdge);
	}
}
std::vector<gSpace::Edge> Graph::getEdges(void)
{
	return edges;
}
std::vector<gSpace::Vertex> Graph::getVertices(void)
{
	return vertices;
}

GraphType Graph::getType(void)
{
	return type;
}
void Graph::insert(gSpace::Vertex v)
{       
	vertices.push_back(v);
}
int Graph::numVertices(void)
{       
	return vertices.size();
}
int Graph::numEdges()
{       
	return edges.size();
}
