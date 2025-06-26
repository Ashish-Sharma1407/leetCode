// Last updated: 6/27/2025, 2:29:24 AM
class Solution {
    public boolean validMountainArray(int[] arr) {

        int size =  arr.length;

        int start = 0;
        int end = size - 1;

        while(start+1<size && arr[start] < arr[start + 1]){
            start++;
        }
        while(end >0 && arr[end] <arr[end - 1]){
            end--;
        }
        return start > 0 && start == end && end < size -1;
    }
}