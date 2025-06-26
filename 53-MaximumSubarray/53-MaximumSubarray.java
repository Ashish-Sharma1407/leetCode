// Last updated: 6/27/2025, 2:31:03 AM
class Solution {
    public int maxSubArray(int[] nums) {
        if (nums.length == 1) {
            return nums[0];  // Handle single-element case
        }

        int currentSum = nums[0];  // Start with the first element
        int maxSum = nums[0];      // Start with the first element

        for (int index = 1; index < nums.length; index++) {
            currentSum = Math.max(nums[index], currentSum + nums[index]);
            maxSum = Math.max(currentSum, maxSum);
        }

        return maxSum;
    }
}