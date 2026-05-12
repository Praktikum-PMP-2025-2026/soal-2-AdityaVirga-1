#include <stdio.h>
#include <stdlib.h>

int has_cycle(int node, int N, int** Data1, int* visited) {
    if (visited[node] == 1) return 1; 
    if (visited[node] == 2) return 0; 

    visited[node] = 1; 
    
    for (int i = 0; i < N; i++) {
        if (Data1[node][i] == 1) { 
            if (has_cycle(i, N, Data1, visited)) {
                return 1;
            }
        }
    }

    visited[node] = 2; 
    return 0; 
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int** Data1 = (int**)malloc(N * sizeof(int*));
    int* visited = (int*)calloc(N, sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", Data1[i]);
        Data1[i] = 1;
    }

    int cycle = 0;
    
    for (int i = 0; i < N; i++) {
        if (visited[i] == 0) { 
            if (has_cycle(i, N, Data1, visited)) {
                cycle = 1; 
                break;  
            }
        }
    }

    if (cycle) {
        printf("Level 0:" "%d", N); 
        printf("level 1:" "%d", N);
        printf("level 2:" "%d", N);
    }

    for (int i = 0; i < N; i++) {
        free(Data1[i]);
    }
    free(Data1);
    free(visited);

    return 0;
}
