class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n, 0));
        
        for (int r = 0; r < indices.size(); ++r) {
            int r1 = indices[r][0];
            int c1 = indices[r][1];
            
            for (int j = 0; j < n; ++j) {
                mat[r1][j] += 1;
            }
            
            for (int i = 0; i < m; ++i) {
                mat[i][c1] += 1;
            }
        }
        
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] % 2 != 0) {
                    sum++;
                }
            }
        }
        
        return sum;
    }
};
