class Solution {
public:
    double myPow(double x, int n) {
        long num = n;
        if (n < 0) {
            x = 1 / x;
            num = -num;
        }

        double pow = 1;

        while (num) {
            if (num & 1) pow *= x;

            x *= x;
            num >>= 1;
        }

        return pow;
    }
};