// https://leetcode.com/problems/shortest-palindrome/
class Solution {
public:
    string shortestPalindrome(string s) {
        string s_revs = s;
        reverse(s_revs.begin(), s_revs.end());
        string str = s + '#' + s_revs;
        vector<int> table(str.length());
        prefix_table(str, table);
        return s_revs.substr(0, s.length() - table.back()) + s;
    }
    
    void prefix_table(string& p, vector<int>& table) {
        table[0] = 0;
        int i = 1, index = 0;
        int len = p.size();
        while (i < len) {
            if (p[i] == p[index]) {
                table[i] = index + 1;
                index++;
                i++;
            }
            else if (index > 0) {
                index = table[index - 1];
            }
            else {
                table[i] = 0;
                i++;
            }
        }
    }
};