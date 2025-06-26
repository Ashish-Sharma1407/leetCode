// Last updated: 6/27/2025, 2:30:13 AM
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> number = new HashSet<>();
        for(int index = 0; index < nums.length; index++){
            if(number.contains(nums[index])){
                return true;
            }
            else{
                number.add(nums[index]);
            }
        }
        return false;
    }
}