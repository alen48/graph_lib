/*
 * File: graph.cc
 * --------------
 * This file contains the basic methods of a graph.
 */

#include "graph.h"

void Graph::addEdge(gSpace::Vertex u, gSpace::Vertex v, int dist)
{
	if (Graph::findEdge(u, v)) {
		cout << "\nEdge already exist between " << u.getName() << " and " << v.getName();
		return;
	}
	
	Graph::addVertex(u);
	Graph::addVertex(v);
	gSpace::Edge newEdge(u, v, dist);
	edges.insert(newEdge);
	if (type == UNDIRECTED) {
		gSpace::Edge revEdge(v, u, dist);
		edges.insert(revEdge);
	}
#ifdef DEBUG
	cout << "\nEdge added between " << u.getName() << " and " << v.getName();
#endif	
	return;
}

int Graph::findEdge(gSpace::Vertex u, gSpace::Vertex v)
{
	std::set <gSpace::Edge> edges = Graph::getEdges();
	for (std::set <gSpace::Edge>::iterator it = edges.begin(); it != edges.end(); it++) {
		
	}
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
