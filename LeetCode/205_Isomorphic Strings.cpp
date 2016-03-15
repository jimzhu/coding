class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> m1 (256, -1), m2 (256, -1); // 256 is the maximal to represent ASCII character
        for (int i = 0; i < s.size(); ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i; // hash the position
            m2[t[i]] = i;
        }
        return true;
    }
};