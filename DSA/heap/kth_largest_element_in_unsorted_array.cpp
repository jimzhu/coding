/* ref: http://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
 * Method 1: O(nlogn) quick/merge sort, then pick the kth smallest
 * Method 2: O(n + klogn) build minheap O(n), and extract the smallest k times, and minheapify O(klogn)
 * Method 3: O(k + (n-k)logk) build k-size maxheap O(k), insert (n-k) elements, and maxheapfiy O((n-k)logk)
 * Method 4: O(n) quick_select
*/

// Method 3:
#include<iostream>
#include<vector>
using namespace std;

void minheapify(vector<int>& heap, int node, int heap_size) {
    int left_child = 2 * node + 1;
    int right_child = 2 * node + 2;
    int smallest = node;
    if (left_child < heap_size) {
        if (heap[smallest] > heap[left_child]) {
            smallest = left_child;
        }
    }
    if (right_child < heap_size) {
        if (heap[smallest] > heap[right_child]) {
            smallest = right_child;
        }
    }
    if (smallest != node) {
        swap(heap[node], heap[smallest]);
        minheapify(heap, smallest, heap_size);
    }
}

void build_minheap(vector<int>& heap, int heap_size) {
    int non_leaf = heap_size / 2 -  1;
    for (int i = non_leaf; i >= 0; i--) {
        minheapify(heap, i, heap_size);
    }
}

int findKthLargest(vector<int>& nums, int k) {
    build_minheap(nums, k);
    for (int i = k; i < nums.size(); i++) {
        if (nums[i] > nums[0]) {
            nums[0] = nums[i];
            minheapify(nums, 0, k);
        }
    }
    return nums[0];
}

int main() {
    vector<int> a {3, 1, 2, 4, 8};
    cout << "2nd largest: " << findKthLargest(a, 2) << endl;
    return 0;
}


