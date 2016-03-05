// reference: http://forum.codecall.net/topic/64715-how-to-generate-all-permutations/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        recursion(nums, 0, result);
        return result;
    }

private:
    void recursion(vector<int>& nums, int idx, vector<vector<int>>& result) {
        if (idx >= nums.size() - 1) {
            result.push_back(nums);
        }
        else {
            for (int i = idx; i < nums.size(); i++) {
                swap(nums[idx], nums[i]);
                recursion(nums, idx + 1, result);
                swap(nums[idx], nums[i]); // 采用reference传递，所以需要还原
            }
            
        }
    }
};