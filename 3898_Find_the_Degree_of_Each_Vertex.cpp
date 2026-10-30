class Solution {
    public:
        vector<int> findDegrees(vector<vector<int>>& matrix) {
            vector<int> result;
            int sum = 0;
            for (int i = 0; i < matrix.size(); i++) {
                for (int j = 0; j < matrix[0].size(); j++) {
                    sum += matrix[j][i];
                }
                result.push_back(sum);
                sum = 0;
            }
            return result;
        }
    };