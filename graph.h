#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

enum GraphType {UNDIRECTED, DIRECTED};

namespace gSpace
{
	class Vertex
	{
		private:
			std::string name;
		public:
			Vertex(std::string id) : name(id) {}
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
			int distance;
		public:
			Edge(Vertex& v1, Vertex& v2, int dist) : source(v1), destination(v2)
			{
				distance = dist;
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
	};
}

class Graph
{
	private:
		GraphType type;
		std::vector<gSpace::Vertex> vertices;
		std::vector<gSpace::Edge> edges;
	public:
		Graph() : type(DIRECTED) {}
		Graph(GraphType typeX) : type(typeX) {}
		void addEdge(gSpace::Vertex& u, gSpace::Vertex& v, int dist);
		std::vector<gSpace::Edge> getEdges(void);
		std::vector<gSpace::Vertex> getVertices(void);
		GraphType getType(void);
		void insert(gSpace::Vertex v);
		int numVertices(void);
		int numEdges();
};
