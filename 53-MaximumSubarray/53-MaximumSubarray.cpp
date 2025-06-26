// Last updated: 6/27/2025, 2:30:59 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0];
        int maxSum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            curSum = max(nums[i], curSum + nums[i]);
            maxSum = max(curSum, maxSum);
        }  
        return maxSum;
    }
};