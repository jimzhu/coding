// quickselect based solution: O(n) on average
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if (k >= 1 && k <= nums.size()) {
            return quick_select(nums, 0, nums.size() - 1, k);
        }
        return -1;
    }

private:
    int quick_select(vector<int>& nums, int left, int right, int k) {
        int pivot = partition(nums, left, right);
        if (pivot  == nums.size() - k) {
            return nums[pivot];
        }
        else if (pivot > nums.size() - k) {
            return quick_select(nums, left, pivot - 1, k);
        }
        else {
            return quick_select(nums, pivot + 1, right, k);
        }
    }

    int partition(vector<int>& nums, int left, int right) {
        int pivot = rand() % (right - left + 1) + left;
        int pv = nums[pivot];
        swap(nums[pivot], nums[left]);
        while (left < right) {
            while (left < right && nums[right] >= pv) {
                right--;
            }
            nums[left] = nums[right];
            while (left < right && nums[left] < pv) {
                left++;
            }
           nums[right] = nums[left];
        }
        nums[left] = pv;
        return left;
    }
};


/* minheap based solution
class Solution {
public:
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

private:
    void build_minheap(vector<int>& heap, int heap_size) {
        int non_leaf = heap_size / 2 -  1;
        for (int i = non_leaf; i >= 0; i--) {
            minheapify(heap, i, heap_size);
        }
    }
    
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
};
*/