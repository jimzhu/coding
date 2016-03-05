#include<iostream>
#include<vector>
using namespace std;

template<typename T>
int partition(vector<T>& array, int left, int right) {
    T p = array[left];
    while (left < right) {
        while (left < right && array[right] > p) {
            right--;
        }
        array[left] = array[right];
        while (left < right && array[left] < p) {
            left++;
        }
        array[right] = array[left];
    }
    array[left] = p;
    return left;
}

template<typename T>
void quick_sort(vector<T>& array, int left, int right) {
    if (left < right) {
        int pivot = partition(array, left, right);
        quick_sort(array, left, pivot - 1);
        quick_sort(array, pivot + 1, right);
    }
}

template<typename T>
void sort(vector<T>& array) {
    quick_sort(array, 0, array.size() - 1);
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


