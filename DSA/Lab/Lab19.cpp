
// Program to traverse graphs using BFS

#include<iostream>
#include <list>
using namespace std;

class Graph {
    int V; // No. of vertices
    list<int>* adj; // Pointer to an array containing adjacency lists

    // A function used by BFS
    void BFSUtil(int v, bool visited[]);

public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // Function to add an edge
    void connectedComponents(); // Function to print connected components
};

// Constructor to initialize the graph
Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

// Function to add an undirected edge between vertices v and w
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v); // Since the graph is undirected
}

// Function to print BFS traversal from a given vertex
void Graph::BFSUtil(int v, bool visited[]) {
    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[v] = true;
    queue.push_back(v);

    while (!queue.empty()) {
        // Dequeue a vertex from the queue and print it
        v = queue.front();
        cout << v << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

// Function to print connected components of the graph
void Graph::connectedComponents() {
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
    for (int v = 0; v < V; v++)
        visited[v] = false;

    for (int v = 0; v < V; v++) {
        if (!visited[v]) {
            // Print all reachable vertices from v
            BFSUtil(v, visited);
            cout << "\n";
        }
    }
}

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges
    g.addEdge(1, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Print connected components
    cout << "Following are connected components:\n";
    g.connectedComponents();

    return 0;
}




/*OUTPUT

Following are connected components:
0 1
2 3 4

*/