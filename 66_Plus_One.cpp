class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int last = digits.size() - 1;
            digits[last] += 1;
            if (digits[last] == 10) {
            for (int i = 0; i < digits.size(); i++) {  
                if (digits[last - i] == 10) {
                    digits[last - i] = 0;
                    if (digits.front() == 0) {
                        digits.resize(digits.size() + 1);
                        digits[last] = 0;
                        digits.front() = 1; 
                    }
                    if (last - 1 - i < 0) break;
                    digits[last - 1 - i] += 1;
                }
            }}

            return digits;
        }
    };