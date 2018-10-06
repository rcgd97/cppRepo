#pragma once

//graph class for simple operation

class Graph {
private:
	unsigned *ids = nullptr;
	bool **edges = nullptr;
public:
	Graph(int num_ids=0);
	~Graph();
	
	bool operator()(int i, int j);
	void operator()(int i, int j, bool state);
	void clear();
	
	bool** adjacencyMatrix();
};
