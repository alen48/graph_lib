#include "graph.h"

GraphType Graph::getType(void)
{
	return type;
}
void Graph::insert(gSpace::Vertex *v)
{       
	vertices.push_back(v);
}
int Graph::numVertices(void)
{       
	return vertices.size();
}
int Graph::numEdges(void)
{       
	int count = 0;
	for (std::vector<gSpace::Vertex*>::iterator it = vertices.begin();
			it != vertices.end(); it++) {
		count += ((*it)->getEdges()).size();
	}
	return count;
}
