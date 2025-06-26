// Last updated: 6/27/2025, 2:31:21 AM
class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;

        int uniqueIndex = 1;  // Index to place the next unique element

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {   // Compare with the previous element
                nums[uniqueIndex] = nums[i]; // Place unique element at the correct position
                uniqueIndex++;
            }
        }

        return uniqueIndex;  // Length of the unique elements
    }
}