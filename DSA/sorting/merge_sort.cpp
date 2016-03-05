#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void merge(vector<T>& array, int left, int mid, int right) {
    vector<T> a (array.begin() + mid + 1, array.begin() + right + 1);
    int i = a.size() - 1;
    int j = mid;
    int k = right;
    while (i >= 0) {
        if (j >= left && a[i] < array[j]) {
            array[k--] = array[j--];
        }
        else {
            array[k--] = a[i--];
        }
    }
}

template<typename T>
void merge_sort(vector<T>& array, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

template<typename T>
void sort(vector<T>& array) {
    merge_sort(array, 0, array.size() - 1);
}

int main() {
    vector<double> a = {9, 10, 1, 12, 1, 3, 5, 7};
    sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


