// Here is the full proper code for Dijkstra's algorithm in C

#include <stdio.h>
#include <limits.h>

#define MAX 100
#define INF INT_MAX

int minDistance(int dist[], int visited[], int n) {
    int min = INF, min_index;
    for (int v = 0; v < n; v++)
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    return min_index;
}

void dijkstra(int graph[MAX][MAX], int src, int n) {
    int dist[MAX], visited[MAX];
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[src] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, visited, n);
        visited[u] = 1;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d \t %d\n", i, dist[i]);
}

int main() {
    int n, graph[MAX][MAX], src;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    scanf("%d", &src);
    dijkstra(graph, src, n);
    return 0;
}
