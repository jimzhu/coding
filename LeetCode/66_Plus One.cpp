class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        for (i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                digits[i]++;
                break;
            }
        }
        if (i < 0) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};

/* recursion-based solution
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
*/