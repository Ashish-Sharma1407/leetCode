// Last updated: 6/27/2025, 2:29:12 AM
class Solution {
    public int[] runningSum(int[] nums) {
        int[] arr = new int[nums.length];
        arr[0] = nums[0];
        for (int index = 1; index < nums.length; index++){
            arr[index] = nums[index] + arr[index - 1];
        }
        return arr;
    }
}