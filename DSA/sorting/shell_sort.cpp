#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void sort(vector<T>& array) {
    for (int gap = array.size() / 2; gap >= 1; gap /= 2) {
        for (int i = gap; i < array.size(); i++) {
            for (int j = i; j >= gap && array[j] < array[j - gap]; j -= gap) {
                swap(array[j], array[j - gap]);
            }
        }
    }
}

int main() {
    vector<double> a = {9, 10, 12, 1, 3, 5, 7};
    sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


