// Last updated: 6/27/2025, 2:29:38 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(start == end){
                return arr[start];
            }
            if(mid == 0 && arr[0] != arr[1]){
                return arr[mid];
            }
            if(mid == (arr.size() - 1) && arr[arr.size() - 1] != arr[arr.size() - 2]){
                return arr[mid];
            }
            if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]){
                return arr[mid];
            }
            if(mid % 2 == 0){
                if(arr[mid - 1] == arr[mid]){
                    end = mid - 1;
                } else{
                    start = mid + 1;
                }
            }

            if(mid % 2 == 1){
                if(arr[mid - 1] == arr[mid]){
                    start = mid + 1;
                } else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};