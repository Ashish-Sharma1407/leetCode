// Last updated: 6/27/2025, 2:29:16 AM
class Solution {
    public boolean check(int[] nums) {
        int count = 0;
        for(int index = 0; index < nums.length - 1; index++){
            if(nums[index] > nums[index + 1]){
                count++;
            }
        }
        if(nums[nums.length - 1] > nums[0]){
            count++;
        }
        if(count <= 1){
            return true;
        }
        else{
            return false;
        }
    }
}