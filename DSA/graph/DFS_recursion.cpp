#include <iostream>
#include <vector>
using namespace std;



void DFS(vector<vector<double> >& graph, int source, vector<bool>& visited) {
    cout << source << " ";
    visited[source] = true;
    for (int i = 0; i < graph.size(); i++) {
      if (!visited[i] && graph[source][i] > 0) {
        DFS(graph, i, visited);
      }
    }
}

int main() {
    vector<vector<double> > graph 
                     {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
    // result: 0 1 2 3 4 5 6 7 8
    vector<bool> visited(graph.size(), false);
    DFS(graph, 0, visited); 
    return 0;
}


