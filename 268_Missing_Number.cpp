class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int predicted_sum = 0;
            int vector_sum = accumulate(nums.begin(), nums.end(), 0);
            for (int i = 1; i <= nums.size(); i++) {
                predicted_sum += i;
            }
            return predicted_sum - vector_sum;
        }
    };