// Implementing an application of DFS such as to find the topological sort of a directed acyclic graph

#include <iostream>
using namespace std;

#define MAX 10 // Maximum number of vertices

int adj[MAX][MAX]; // Adjacency matrix to store graph
bool visited[MAX]; // Visited array for DFS
int Stack[MAX]; // Stack to store topological order
int top = -1; // Stack pointer
int V; // Number of vertices

// Push onto stack
void push(int v) {
    Stack[++top] = v;
}
// Pop from stack 
int pop() {
    return Stack[top--];
}


// DFS function for Topological Sorting
void topologicalSortUtil(int v) {
    visited[v] = true;

    // Visit all adjacent vertices
    for (int i = 0; i < V; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            topologicalSortUtil(i);
        }
    }

    // Push current vertex to stack after visiting all adjacent vertices
    push(v);
}

// Function to perform Topological Sort
void topologicalSort() {
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }
// call dfs for all unvisited vertices
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            topologicalSortUtil(i);
        }
    }

    // print the topological order by popping from stack
    cout << "Topological order: ";
    while (top != -1) {
        cout << pop() << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> V;
    //
    cout << "Enter the adjacency matrix: ";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            adj[i][j] = 0;
        }
    }
    int E;
    cout<<"enter the number of edges: ";
    cin>>E;
    //input the edges
    cout<<"entre the edges(u,v) formet from u to v"<<endl;
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
    }
    topologicalSort();
    return 0;

}

