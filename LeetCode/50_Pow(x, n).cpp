class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        unsigned int p = n; // to handle signed int overflow
        while (p) {
            if (p & 1 == 1) res *= x;
            x = x * x;
            p >>= 1;
        }
        return res;
    }
};