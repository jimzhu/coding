#include <iostream>
#include <vector>
#include <stack>
using namespace std;



void DFS(vector<vector<double> >& graph, int source) {
    stack<int> S;
    vector<bool> visited(graph.size(), false);
    S.push(source);
    while (!S.empty()) {
      int v = S.top();
      S.pop();
      if (!visited[v]) {
        visited[v] = true;
        cout << v << " ";
      }
      for (int i = graph.size() - 1; i >= 0; i--) {
        if (!visited[i] && graph[v][i] > 0) {
          S.push(i);
        }
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
    DFS(graph, 0);
    return 0;
}


