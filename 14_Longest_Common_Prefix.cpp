class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        string shortest = strs[0];
        for (const string& s : strs) {
            if (s.size() < shortest.size()) {
                shortest = s;
            }
        }

        for (int i = 0; i < shortest.size(); ++i) {
            char current = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != current) return result;
            }
            result.push_back(current);
        }

        return result;
    }
};