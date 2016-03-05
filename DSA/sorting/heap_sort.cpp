#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void heapify(vector<T>& array, int node, int heap_size) {
    int left = 2 * node + 1;
    int right = 2 * node + 2;
    int largest = node;
    if (left < heap_size) {
        if (array[largest] < array[left]) {
            largest = left;
        }
    }
    if (right < heap_size) {
        if (array[largest] < array[right]) {
            largest = right;
        }
    }
    if (largest != node) {
        swap(array[largest], array[node]);
        heapify(array, largest, heap_size);
    }
}

template<typename T>
void build_maxheap(vector<T>& array) {
    int heap_size = array.size();
    int non_leaf = heap_size / 2 - 1;
    for (int i = non_leaf; i >=0; i--) {
        heapify(array, i, heap_size);
    }
}

template<typename T>
void heap_sort(vector<T>& array) {
    build_maxheap(array);
    int heap_size = array.size();
    for (int i = heap_size - 1; i > 0; i--) {
        swap(array[0], array[i]);
        heap_size -= 1;
        heapify(array, 0, heap_size);
    }
}

int main() {
    vector<double> a = {9, 10, 1, 12, 1, 3, 5, 7};
    heap_sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


