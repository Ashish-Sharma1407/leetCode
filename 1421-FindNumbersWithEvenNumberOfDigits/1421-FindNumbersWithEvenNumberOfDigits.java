// Last updated: 6/27/2025, 2:29:17 AM
class Solution {

    public int findNumbers(int[] nums) {
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            if(countDigits(nums[i]) % 2 == 0){
                count++;
            }
        }
        return count;
    }
    static int countDigits(int num){
        return (int)(Math.log10(num)) + 1;
        // int count = 0;
        // while(num > 0){
        //     count++;
        //     num = num / 10;
        // }
        // return count;
    }
}