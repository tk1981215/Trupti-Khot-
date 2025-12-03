#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Node structure for adjacency list
struct Node {
    int vertex;
    struct Node *next;
};

struct Node *adj[MAX];   // Adjacency list
int visited[MAX];        // Visited array
int n;                   // Number of vertices

// Function to add edge
void addEdge(int src, int dest) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->vertex = dest;
    newNode->next = adj[src];
    adj[src] = newNode;
}

// DFS function
void DFS(int v) {
    struct Node *temp;
    visited[v] = 1;
    printf("%d ", v);

    temp = adj[v];
    while (temp != NULL) {
        if (!visited[temp->vertex])
            DFS(temp->vertex);
        temp = temp->next;
    }
}

int main() {
    int e;
    
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Initialize adjacency list and visited array
    for (int i = 0; i < n; i++) {
        adj[i] = NULL;
        visited[i] = 0;
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter each edge (src dest):\n");
    for (int i = 0; i < e; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(src, dest);
        addEdge(dest, src); // for undirected graph
    }

    int start;
    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    DFS(start);

    return 0;
}
