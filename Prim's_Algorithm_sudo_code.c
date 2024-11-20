// Pseudocode for Prim's Algorithm in C
void primsAlgorithm(int graph[V][V], int V) {
    int parent[V];      // Array to store the MST
    int key[V];         // Key values to pick minimum weight edge
    int mstSet[V];      // To keep track of vertices included in MST

    // Initialize key values and mstSet
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;  // Set all keys to infinity
        mstSet[i] = 0;     // Mark all vertices as not included
    }

    key[0] = 0;           // Start from the first vertex
    parent[0] = -1;       // First node is always the root

    // Loop to construct the MST
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet, V); // Pick minimum key vertex
        mstSet[u] = 1;                  // Include it in the MST

        // Update key values for adjacent vertices
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;  // Update parent
                key[v] = graph[u][v]; // Update key value
            }
        }
    }

    printMST(parent, graph, V); // Print the MST
}
