// Last updated: 6/27/2025, 2:30:45 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int startRow = 0;
        int endRow = mat.size() - 1;
        int mid = 0;
        while(startRow <= endRow){
            mid = startRow + (endRow - startRow) / 2;
            if(target >= mat[mid][0] && target <= mat[mid][mat[mid].size() - 1]){
                break;
            }
            else if(target >= mat[mid][mat[mid].size() - 1]){
                startRow = mid + 1;
            } else{
                endRow = mid - 1;
            }
        }

        int start = 0;
        int end = mat[mid].size() - 1;
        while(start <= end){
            int col = start + (end - start) / 2;

            if(mat[mid][col] == target){
                return true;
            } else if(mat[mid][col] > target){
                end = col - 1;
            } else{
                start = col + 1;
            }
        }
        return false;
    }
};