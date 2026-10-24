class Solution {
    public:
        int romanToInt(string s) {
            if (s.length() < 0 || s.length() > 16) return false;
            int total = 0;
            char symbols[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
            int values[7] = {1, 5, 10, 50, 100, 500, 1000};
            int result = 0;
            for (int i = 0; i < s.length(); i++) {
                for (int j = 0; j < 7; j++) {
                    if (s[i] == symbols[j]) {
                        int current = values[j];
                        int next = 0;
                        if (i + 1 < s.length()) {
                            for (int k = 0; k < 7; k++) {
                                if (s[i + 1] == symbols[k]) next = values[k];
                            }
                        }
                        if (current < next)
                            total -= current;
                        else
                            total += current;
                    }
                }
            }
            result = total;
            return result;
        }
    };
