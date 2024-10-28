
// Program to traverse graphs using DFS

#include<iostream>
using namespace std;

void DFS(int);
int G[10][10], visited[10], n;

int main() {
    int i, j;

    cout << "\nEnter number of vertices: ";
    cin >> n;

    // Read the adjacency matrix
    cout << "\nEnter adjacency matrix of the graph:\n";
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> G[i][j];

    // Initialize visited array to zero
    for(i = 0; i < n; i++)
        visited[i] = 0;

    // Perform DFS starting from vertex 0
    DFS(0);

    return 0;
}

void DFS(int i) {
    int j;
    cout << i << " "; // Print the visited vertex
    visited[i] = 1;   // Mark it as visited

    // Recur for all adjacent vertices
    for(j = 0; j < n; j++) {
        if(!visited[j] && G[i][j] == 1) {
            DFS(j);  // If an unvisited vertex is adjacent, visit it recursively
        }
    }
}

 

/* output 
Enter number of vertices: 8

Enter adjacency matrix of the graph:
0 1 1 1 1 0 0 0 
1 0 0 0 0 1 0 0 
1 0 0 0 0 1 0 0 
1 0 0 0 0 0 1 0 
1 0 0 0 0 0 1 0
0 1 1 0 0 0 0 1
0 0 0 1 1 0 0 1 
0 0 0 0 0 1 1 0
0 1 5 2 7 6 3 4*/








