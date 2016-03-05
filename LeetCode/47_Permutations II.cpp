// reference https://leetcode.com/discuss/25279/a-simple-c-solution-in-only-20-lines
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        recursion(nums, 0, result);
        return result;  
    }

private:
    void recursion(vector<int> nums, int idx, vector<vector<int>>& result) {
        if (idx >= nums.size() - 1) {
            result.push_back(nums);
        }
        else {
            for (int i = idx; i < nums.size(); i++) {
                if (i == idx || nums[idx] != nums[i]) {
                    swap(nums[idx], nums[i]);
                    recursion(nums, idx + 1, result);
                }
            }
        }
    }
};