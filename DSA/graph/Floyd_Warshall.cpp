#include <iostream>
#include <vector>
#include <limits> // for numeric_limits
using namespace std;

void sp_all_pairs(vector<vector<double> >& graph) {
    vector<vector<double>> dist(graph);
    int num_vertices = graph.size();
    for (int i = 0; i < num_vertices; i++)
        for (int j = 0; j < num_vertices; j++) {
            if (i != j && dist[i][j] == 0) {
                dist[i][j] = numeric_limits<double>::infinity();
            }  
        }

    for (int k = 0; k < num_vertices; k++)
        for (int i = 0; i < num_vertices; i++)
            for (int j = 0; j < num_vertices; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }

    for(int i = 0; i < num_vertices; i++) {
        cout << dist[0][i] << " ";
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
    sp_all_pairs(graph); 
    return 0;
}


