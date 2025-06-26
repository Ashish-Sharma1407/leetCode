// Last updated: 6/27/2025, 2:29:34 AM
class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int start = 0;
        int end = letters.length - 1;

        if(letters[letters.length - 1] <= target){
            return letters[0];
        }

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(letters[mid] > target){
                end = mid - 1; 
            }
            else{
                start = mid + 1;
            }
        }
        return letters[start];
    }
}