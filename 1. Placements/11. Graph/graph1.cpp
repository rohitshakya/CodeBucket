/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title :
 */
#include<bits/stdc++.h> 
using namespace std; 
class Graph
{
	int v;
	list<int> *adj;
	public:
	Graph(int v)
	{
		this->v=v;
		adj=new list<int>[v]; 
	}
	addEdge(int w, int x)
	{
		adj[w].push_back(x);
	}
	void BFS(int s) 
{ 
	// Mark all the vertices as not visited 
	bool *visited = new bool[v]; 
	for(int i = 0; i < v; i++) 
		visited[i] = false; 

	list<int> queue; 
	visited[s] = true; 
	queue.push_back(s); 
	list<int>::iterator i; 

	while(!queue.empty()) 
	{ 
		// Dequeue a vertex from queue and print it 
		s = queue.front(); 
		cout << s << " "; 
		queue.pop_front(); 
	for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		{ 
			if (!visited[*i]) 
			{ 
				visited[*i] = true; 
				queue.push_back(*i); 
			} 
		} 
	} 
} 

};
int main()
{
	Graph g(4); 
	g.addEdge(0, 1); 
	g.addEdge(0, 2); 
	g.addEdge(1, 2); 
	g.addEdge(2, 0); 
	g.addEdge(2, 3); 
	g.addEdge(3, 3); 

	cout << "Following is Breadth First Traversal "<< "(starting from vertex 2) \n"; 
	g.BFS(2); 
	return 0; 
}
