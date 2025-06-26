// Last updated: 6/27/2025, 2:29:05 AM
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int row = 0; row < mat.size(); row++){
           sum = sum + mat[row][row];
           if(row != mat.size() - row - 1){
            sum = sum + mat[row][mat.size()-row-1];
           }
        }
        return sum;
    }
};