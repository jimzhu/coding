class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        recursion(digits, digits.size() - 1);
        return digits;
    }
private:
    void recursion(vector<int>& digits, int index) {
        if (index < 0) digits.insert(digits.begin(), 1);
        else if (digits[index] < 9) {
            digits[index] += 1;
        }
        else {
            digits[index] = 0;
            recursion(digits, index - 1);
        }
    }
};