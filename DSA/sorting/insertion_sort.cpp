#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& array) {
    for (int i = 1; i < array.size(); i++) {
        for (int j = i; j > 0 && array[j] < array[j - 1]; j--) {
            swap(array[j], array[j - 1]);
        }
    }
}

int main() {
    vector<int> a = {5, 10, 12, 1, 3};
    sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


