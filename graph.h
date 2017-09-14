#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

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

class Graph
{
private:
	std::vector<Vertex*> vertices;
public:
	Graph() {}
	void insert(Vertex *v)
	{
		vertices.push_back(v);
	}
};
