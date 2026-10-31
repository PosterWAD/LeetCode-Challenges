class Solution {
    public:
        vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
            vector<vector<int>> maxLocal(grid.size() - 2, vector<int>(grid.size() - 2, 0));
            for (int i = 0; i < grid.size() - 2; i++) {
                for (int j = 0; j < grid.size() - 2; j++) {
                    int max_val = max({
                        grid[i][j],   grid[i][j+1],   grid[i][j+2],
                        grid[i+1][j], grid[i+1][j+1], grid[i+1][j+2],
                        grid[i+2][j], grid[i+2][j+1], grid[i+2][j+2]
                    });
                    maxLocal[i][j] = max_val;
                }
            }
            return maxLocal;
        }
    };