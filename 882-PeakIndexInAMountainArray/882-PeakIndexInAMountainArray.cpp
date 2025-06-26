// Last updated: 6/27/2025, 2:29:25 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size() - 2;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
                return mid;
            }
            else if(arr[mid] < arr[mid - 1]){
                end = mid - 1;
            } 
            else if(arr[mid] < arr[mid + 1]){
                start = mid + 1;
            }
        }
        return -1;
    }
};