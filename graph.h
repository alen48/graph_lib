/*
 * File: graph.h
 * -------------
 * This file contains the templates used to create graphs.
 */


#ifndef _graph_h_
#define _graph_h_

#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

enum GraphType {UNDIRECTED, DIRECTED, MULTI};

namespace gSpace
{
	class Vertex
	{
		private:
			std::string name;
		public:
			Vertex(std::string id) : name(id) {}
			bool operator< (const gSpace::Vertex &x) const
			{
				return (name < x.name);
			}
			std::string getName(void)
			{
				return name;
			}
	};

	class Edge
	{
		private:
			Vertex& source;
			Vertex& destination;
			int distance; // distance or weight of the edge
			int level; // for multigraph support
		public:
			Edge(Vertex& v1, Vertex& v2, int dist, int lev) : source(v1), destination(v2)
			{
				distance = dist;
				level = lev;
			}
			bool operator< (const gSpace::Edge &x) const
			{
				return (distance < x.distance);
			}

			Vertex& getSource(void)
			{
				return source;
			}
			Vertex& getDestination(void)
			{
				return destination;
			}
			int getDistance(void)
			{
				return distance;
			}
			int getLevel(void)
			{
				return level;
			}
	};
}

class Graph
{
	private:
		GraphType type;
		std::set<gSpace::Vertex> vertices;
		std::set<gSpace::Edge> edges;
	public:
		Graph() : type(DIRECTED) {}
		Graph(GraphType typeX) : type(typeX) {}
		void addEdge(gSpace::Vertex u, gSpace::Vertex v, int dist);
		std::set<gSpace::Edge> getEdges(void);
		std::set<gSpace::Vertex> getVertices(void);
		GraphType getType(void);
		void addVertex(gSpace::Vertex v);
		int numVertices(void);
		int numEdges(void);
};

#endif
