class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1, j = n - 1, k = m + n - 1;
         // 只需要把nums2的部分处理完就算完成了，因为nums1的部分已经place in order
         while (j >= 0) {
             if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
             }
             else {
                 nums1[k--] = nums2[j--];
             }
         }
    }
};