// Last updated: 6/27/2025, 2:29:40 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) count++;
            maxCount = max(maxCount, count);
            if(nums[i] == 0) count = 0;
        }
        return maxCount;
    }
};