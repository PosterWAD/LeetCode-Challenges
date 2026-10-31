class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int prev_sum = 0;
        for (int r = 0; r < accounts.size(); r++) {
            int sum = 0;
            for (int c = 0; c < accounts[0].size(); c++) {
                sum += accounts[r][c];
            }
            prev_sum = max(prev_sum ,sum);
        }
        return prev_sum;
    }
};