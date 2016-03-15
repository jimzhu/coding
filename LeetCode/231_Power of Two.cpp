/* loop based solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        while (n > 1 && !(n & 1 == 1)) {
            n >>= 1;
        }
        if (n == 1) return true;
        else return false;
    }
};
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n & (n-1));
    }
};


