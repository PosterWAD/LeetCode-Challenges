class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> newVector;
            for (int i = 0; i < nums.size();) {
                for (int j = 1 + i; j < nums.size(); j++) {
                    if (nums[i] + nums[j] == target) {
                        newVector.push_back(i);
                        newVector.push_back(j);
                        break;
                    }
                }
                if (newVector.size() == 2) break;
                i++;
            }
            return newVector;
        }
    };