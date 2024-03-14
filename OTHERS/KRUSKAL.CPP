#include <bits/stdc++.h> 
using namespace std; 

class DSU { 
	int* parent; 
	int* rank; 

public: 
	DSU(int n) { 
		parent = new int[n]; 
		rank = new int[n]; 

		for (int i = 0; i < n; i++) { 
			parent[i] = i; // Initialize each node as its own parent
			rank[i] = 0;   // Initialize rank to 0
		} 
	} 

	int find(int i) { 
		if (parent[i] != i) 
			parent[i] = find(parent[i]); // Path compression
		return parent[i];
	} 

	void unite(int x, int y) { 
		int s1 = find(x); 
		int s2 = find(y); 

		if (s1 != s2) { 
			if (rank[s1] < rank[s2]) 
				parent[s1] = s2; 
			else if (rank[s1] > rank[s2]) 
				parent[s2] = s1; 
			else { 
				parent[s2] = s1; 
				rank[s1] += 1; 
			} 
		} 
	} 
}; 

class Graph { 
	vector<vector<int> > edgelist; 
	int V; 

public: 
	Graph(int V) { this->V = V; } 

	void addEdge(int x, int y, int w) { 
		edgelist.push_back({ w, x, y }); 
	} 

	void kruskals_mst() { 
		sort(edgelist.begin(), edgelist.end()); 

		DSU s(V); 
		int ans = 0; 
		cout << "Following are the edges in the constructed MST" << endl; 
		for (auto edge : edgelist) { 
			int w = edge[0]; 
			int x = edge[1]; 
			int y = edge[2]; 

			if (s.find(x) != s.find(y)) { 
				s.unite(x, y); 
				ans += w; 
				cout << x << " -- " << y << " == " << w << endl; 
			} 
		} 
		cout << "Minimum Cost Spanning Tree: " << ans; 
	} 
}; 

int main() { 
	Graph g(12); 
	g.addEdge(0, 1, 7); 
	g.addEdge(0, 2, 9); 
	g.addEdge(0, 5, 14); 
	g.addEdge(1, 2, 10); 
	g.addEdge(1, 3, 15); 
	g.addEdge(2, 3, 11); 
	g.addEdge(2, 5, 2); 
	g.addEdge(3, 4, 6);
	g.addEdge(4, 5, 9); 
	g.addEdge(5, 6, 6); 
	g.addEdge(6, 7, 2); 
	g.addEdge(7, 8, 1); 

	g.kruskals_mst(); 

	return 0; 
}
