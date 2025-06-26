// Last updated: 6/27/2025, 2:30:19 AM
class Solution {
    public void rotate(int[] nums, int k) {
        int[] temp = new int[nums.length];
        for(int index = 0; index < nums.length; index++){
            temp[(index + k) % nums.length] = nums[index];
        }
        System.arraycopy(temp,0,nums,0,nums.length);
        System.out.println(Arrays.toString(nums));
    }
}