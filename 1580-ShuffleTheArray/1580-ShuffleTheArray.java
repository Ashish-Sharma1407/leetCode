// Last updated: 6/27/2025, 2:29:13 AM
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] result = new int[nums.length];
        result[0] = nums[0];
        int count = 1;

        for(int index = 1; index < n; index++){
            result[2 * index] = nums[index];
        }
        
        for(int index = n; index < nums.length; index++){
            result[index - (n - count)] = nums[index];
            count++;
            //result[newIndex] = nums[index];
        }
        return result;
    }
}