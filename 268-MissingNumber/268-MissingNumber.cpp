// Last updated: 6/27/2025, 2:29:52 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = (n*(n+1))/2;
        int actualSum = 0;
        for(int val: nums){
            actualSum += val;
        }
        return totalSum - actualSum;
    }
};