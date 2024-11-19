//Sudo code for dijkstra Algorithms

Dijkstra(Graph, src, n)
    Initialize dist[] to INF
    Initialize visited[] to 0
    dist[src] = 0

    for count = 0 to n - 1
        u = minDistance(dist, visited, n)
        visited[u] = 1

        for v = 0 to n - 1
            if !visited[v] && Graph[u][v] && dist[u] != INF && dist[u] + Graph[u][v] < dist[v]
                dist[v] = dist[u] + Graph[u][v]

    Print dist[]
