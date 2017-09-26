/*
 * File: graph.cc
 * --------------
 * This file contains the basic methods of a graph.
 */

#include "graph.h"

void Graph::addEdge(gSpace::Vertex u, gSpace::Vertex v, int dist)
{
	Graph::addVertex(u);
	Graph::addVertex(v);
	gSpace::Edge newEdge(u, v, dist);
	edges.insert(newEdge);
	if (type == UNDIRECTED) {
		gSpace::Edge revEdge(v, u, dist);
		edges.insert(revEdge);
	}
	return;
}
std::set<gSpace::Edge> Graph::getEdges(void)
{
	return edges;
}
std::set<gSpace::Vertex> Graph::getVertices(void)
{
	return vertices;
}

GraphType Graph::getType(void)
{
	return type;
}
void Graph::addVertex(gSpace::Vertex v)
{       
	vertices.insert(v);
}
int Graph::numVertices(void)
{       
	return vertices.size();
}
int Graph::numEdges()
{       
	return edges.size();
}
