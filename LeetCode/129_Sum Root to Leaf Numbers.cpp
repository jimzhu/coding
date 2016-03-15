/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (!root) return 0;
        TreeNode *pl, *pr;
        int sum = 0, rval = root -> val;
        if (pl = root -> left) {
            pl -> val += 10 * rval;
            sum += sumNumbers(pl);
        }
        if (pr = root -> right) {
            pr -> val += 10 * rval;
            sum += sumNumbers(pr);
        }
        if (!pl && !pr)
            sum += rval;
        return sum;
    }
};