/* loop based solution
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n > 1) {
            while (!(n % 3)) {
                n /= 3;
            }
        }
        if (n == 1) return true;
        else return false;
    }
};
*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        return fmod(log10(n) / log10(3), 1) == 0;
    }
};