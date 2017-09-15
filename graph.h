#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

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
			Vertex *getSource()
			{
				return source;
			}
			Vertex *getDestination()
			{
				return destination;
			}
			int getDistance()
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
			std::string getName()
			{
				return name;
			}
			std::vector<Edge> getEdges()
			{
				return edges;
			}
	};
}

class Graph
{
	private:
		std::vector<gSpace::Vertex*> vertices;
	public:
		Graph() {}
		void insert(gSpace::Vertex *v)
		{
			vertices.push_back(v);
		}
		int numVertices()
		{
			return vertices.size();
		}
		int numEdges()
		{
			int count = 0;
			for (std::vector<gSpace::Vertex*>::iterator it = vertices.begin(); it != vertices.end(); it++) {
				count += ((*it)->getEdges()).size();
			}
			return count;
		}
};
