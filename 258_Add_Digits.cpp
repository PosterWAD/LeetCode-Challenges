class Solution {
    public:
        vector<int> intToVector(int x) {
            vector<int> result;
            while (x > 0) {
                result.push_back(x % 10);
                x /= 10;
            }
            reverse(result.begin(), result.end());
            return result;
        }
    
        int addDigits(int num) {
            int answear = 0;
            if (num < 10) {
                answear = num;
            }
    
            else {
                vector<int> v = intToVector(num);
                int sum = accumulate(v.begin(), v.end(), 0);
                while (sum >= 10) {
                    v = intToVector(sum);
                    sum = accumulate(v.begin(), v.end(), 0);
                }
                answear = sum;
            }
            return answear;
        }
    };