class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n,0));
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        int sum = 1;
        do {
                for (int i = left; i <= right; i++) {
                    result[top][i] = (sum++);    
                }
                top++;
                for (int i = top; i <= bottom; i++) {
                    result[i][right] = (sum++);
                }
                right--;
                if (top <= bottom){
                    for (int i = right; i >= left; i--) {
                        result[bottom][i] = (sum++);
                    }
                    bottom--;
                }
                if (left <= right) {
                    for (int i = bottom; i >= top; i--) {
                        result[i][left] = (sum++);
                    }
                    left++;
                }
        }while(top <= bottom && left <= right);
        return result;
    }
};