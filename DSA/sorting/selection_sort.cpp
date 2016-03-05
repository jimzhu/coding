#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& array) {
    for (int i = 0; i < array.size() - 1; i++) {
        int id = i;
        for (int j = i + 1; j < array.size(); j++) {
            if (array[j] < array[id]) {
                id = j;
            }
        }
        if (i != id) {
            swap(array[i], array[id]);
        }
    }
}

int main() {
    vector<int> a = {0, 10, 12, 1, 3};
    sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


