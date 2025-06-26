// Last updated: 6/27/2025, 2:31:07 AM
class Solution {
    public int searchInsert(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;  // Target found
            } 
            else if (nums[mid] < target) {
                low = mid + 1;   // Search in the right half
            } 
            else {
                high = mid - 1;  // Search in the left half
            }
        }

        // Return the insertion index
        return low;
    }
}
