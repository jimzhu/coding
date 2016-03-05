// O(n) time complexity, O(n) space
// Hash table  

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int, int> hashtable;
        for (size_t i = 0; i < nums.size(); i++) {
            if (hashtable.find(target - nums[i]) != hashtable.end()) {
                res[0] = hashtable[target - nums[i]];
                res[1] = i;
                return res;
            }
            else
                hashtable[nums[i]] = i;
        }
    }
};