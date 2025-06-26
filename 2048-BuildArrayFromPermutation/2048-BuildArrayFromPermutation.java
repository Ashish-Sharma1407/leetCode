// Last updated: 6/27/2025, 2:29:00 AM
class Solution {
    public int[] buildArray(int[] nums) {
        int[] ans = new int[nums.length];
        for(int index = 0; index < nums.length; index++){
            int element = nums[nums[index]];
            ans[index] = element;
        }
        return ans;
    }
}