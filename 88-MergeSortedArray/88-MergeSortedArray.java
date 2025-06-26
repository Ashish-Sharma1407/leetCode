// Last updated: 6/27/2025, 2:30:47 AM
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int pointer = 0;
        for(int index = m; index < nums1.length; index++){
            nums1[index] = nums2[pointer];
            pointer++;
        }
        Arrays.sort(nums1);
        System.out.print(Arrays.toString(nums1));
    }
}