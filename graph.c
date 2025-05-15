#include <stdio.h>
#define MAX 5

// Adjacency list representation of the graph
// graph[i] contains the neighbors of vertex i
int graph[MAX][MAX] = {
    {1, 2},    // neighbors of vertex 0
    {0, 3, 4}, // neighbors of vertex 1
    {0},       // neighbors of vertex 2
    {1},       // neighbors of vertex 3
    {1}        // neighbors of vertex 4
};

// Degree array: number of neighbors for each vertex
int degree[MAX] = {2, 3, 1, 1, 1};

// Visited array to keep track of visited vertices during DFS
int visited[MAX] = {0};

// DFS function to traverse graph starting from 'vertex'
void DFS(int vertex) {
    visited[vertex] = 1;            // Mark the current vertex as visited
    printf("%d ", vertex);          // Print the visited vertex
    
    // Recur for all the neighbors of this vertex
    for (int i = 0; i < degree[vertex]; i++) {
        int neighbour = graph[vertex][i];
        if (!visited[neighbour]) { // If neighbor is not visited, recurse
            DFS(neighbour);
        }
    }
}

int main() {
    printf("DFS traversal starting from vertex 0:\n");
    DFS(0);  // Start DFS traversal from vertex 0
    return 0;
}
