#include <iostream>
#include <vector>
#include <queue>
#include <utility> // std::pair
#include <limits> // for numeric_limits
using namespace std;

typedef pair<double, int> pdi;

void dijkstra(vector<vector<double> >& graph, int source) {
    int num_vertices = graph.size();
    vector<double> dist (num_vertices, numeric_limits<double>::infinity());
    dist[source] = 0;
    vector<bool> visited(num_vertices, false);
    priority_queue<pdi, vector<pdi>, greater<pdi>> Q;
    Q.push(make_pair(dist[source], source));
    while(!Q.empty()) { 
        int v = Q.top().second; //取出最小dist的node
        Q.pop();
        if (visited[v]) continue;
        visited[v] = true;
        for (int i = 0; i < num_vertices; i++) {
            if (!visited[i] && graph[v][i] > 0) {
                if (dist[v] + graph[v][i] < dist[i]) {
                    dist[i] = dist[v] + graph[v][i];
                    Q.push(make_pair(dist[i], i));
                }
            }
        }
    }


    for(int i = 0; i < num_vertices; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<double> > graph {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
    // result: 0 4 12 19 21 11 9 8 14
    dijkstra(graph, 0); 
    return 0;
}


