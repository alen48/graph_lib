#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

enum GraphType {UNDIRECTED, DIRECTED, HYPER};

namespace gSpace
{
	class Vertex;

	class Edge
	{
		private:
			Vertex *source;
			Vertex *destination;
			int distance;
		public:
			Edge(Vertex *v1, Vertex *v2, int dist)
			{
				source = v1;
				destination = v2;
				distance = dist;
			}
			Vertex *getSource(void)
			{
				return source;
			}
			Vertex *getDestination(void)
			{
				return destination;
			}
			int getDistance(void)
			{
				return distance;
			}
	};

	class Vertex
	{
		private:
			std::string name;
			std::vector<Edge> edges;
		public:
			Vertex(std::string id)
			{
				name = id;
			}
			void addEdge(Vertex *v, int dist)
			{
				Edge newEdge(this, v, dist);
				edges.push_back(newEdge);
			}
			std::string getName(void)
			{
				return name;
			}
			std::vector<Edge> getEdges(void)
			{
				return edges;
			}
	};
}

class Graph
{
	private:
		GraphType type;
		std::vector<gSpace::Vertex*> vertices;
	public:
		Graph()
		{
			type = DIRECTED;	
		}
		Graph(GraphType typeX)
		{
			type = typeX;
		}
		GraphType getType(void);
		void insert(gSpace::Vertex *v);
		int numVertices(void);
		int numEdges(void);
};
