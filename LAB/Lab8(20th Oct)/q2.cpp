// Dijksta Algo
#include <stdio.h>

void Dijkstra(int Graph[7][7], int n, int start) {
    int cost[7][7], distance[7], pred[7];
    int visited[7], count, mindistance, nextnode, i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        if (Graph[i][j] == 0)
            cost[i][j] = 9999;
        else
            cost[i][j] = Graph[i][j];

    for (i = 0; i < n; i++) {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

    while (count < n - 1) {
        mindistance = 9999;

        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    for (i = 0; i < n; i++)
    if (i != start) {
        printf("\nDistance from source to %d: %d", i, distance[i]);
    }

    printf("\n\n");

}
int main() {
    int i, j, n, u=0;
    n = 7;

    int Graph[7][7]={{0,0,1,2,0,0,0},
                     {0,0,2,0,0,3,0},
                     {1,2,0,1,3,0,0},
                     {2,0,1,0,0,0,1},
                     {0,0,3,0,0,2,0},
                     {0,3,0,0,2,0,1},
                     {0,0,0,1,0,1,0}};

    Dijkstra(Graph, n, u);

  return 0;
}