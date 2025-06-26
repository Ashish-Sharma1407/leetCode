// Last updated: 6/27/2025, 2:30:49 AM
class Solution {
    public void sortColors(int[] nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for(int index = 0; index < nums.length; index++){
            if(nums[index] == 0){
                zeros++;
            }
            else if(nums[index] == 1){
                ones++;
            }
            else{
                twos++;
            }
        }
        for(int index = 0; index < nums.length; index++){
            if(index < zeros){
                nums[index] = 0;
            }

            else if(index >= zeros && index < (zeros + ones)){
                nums[index] = 1;
            }
            else{
                nums[index] = 2;
            }
        }
        System.out.println(Arrays.toString(nums));
    }
}