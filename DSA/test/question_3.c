
#include <stdio.h>

int main() {
    int vertices, edges, i, j, v1, v2, weight;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int adjMatrix[vertices][vertices];


    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (i = 0; i < edges; i++) {
        printf("Enter edge (source destination) and its weight: ");
        scanf("%d %d %d", &v1, &v2, &weight);
        

        adjMatrix[v1][v2] = weight;
        adjMatrix[v2][v1] = weight;
    }

    printf("\nAdjacency Matrix (Weights):\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d\t", adjMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}