// O(n) on average
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