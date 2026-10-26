class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if (n < 1) return false;
            if (n == 1) return true;
            int x = 1;
            while(pow(2, x) != n) {
                x++;
                if (pow(2, x) - 1 == INT_MAX) return false;
            }
            return true;
        }
    };

    /*
    bool isPowerOfTwo(int n) {
    if (n < 1) return false;
    while (n % 2 == 0) n /= 2;
    return n == 1;
    }
    */