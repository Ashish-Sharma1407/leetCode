// Last updated: 6/27/2025, 2:31:08 AM
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;

        if(nums.length == 0){
            return new int[] {-1, -1};
        }

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(nums[mid] == target){

                for(int index = mid; index >= 0; index--){
                    if(nums[index] == target){
                        start = index;
                    }
                }
                for(int index = mid; index < nums.length; index++){
                    if(nums[index] == target){
                        end = index;
                    }
                }
                return new int[] {start, end};
            }

            else if(nums[mid] > target){
                end = mid - 1;
            }

            else if(nums[mid] < target){
                start = mid + 1;
            }
        }

        return new int[] {-1, -1};
    }
}