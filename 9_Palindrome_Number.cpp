class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false;
            std::string left = std::to_string(x);
            std::string right = left;
            for (int i = 0; i < left.size(); i++) {
                right[left.size() - 1 - i] = left[i];
            }
            return (left == right) ? true : false;
        }
    };
    