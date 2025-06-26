// Last updated: 6/27/2025, 2:30:34 AM
class Solution {
    public int singleNumber(int[] nums) {
        int unique = 0;
        for(int index = 0; index < nums.length; index++){
            unique ^= nums[index];
        }
        return unique;
    }
}