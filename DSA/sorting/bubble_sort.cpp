#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& array) {
    for (int i = 0; i < array.size() - 1; i++) {
        bool swapped = false;
        for (int j = array.size() - 1; j > i; j--) {
            if (array[j] < array[j-1]) {
                swap(array[j], array[j-1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> a = {9, 10, 12, 1, 3};
    sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


