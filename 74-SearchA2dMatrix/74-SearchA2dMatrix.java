// Last updated: 6/27/2025, 2:30:51 AM
class Solution {
    
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = 0;
        int col = matrix[0].length - 1;

        while(row < matrix.length && col >= 0){

            if(matrix[row][col] == target){
                return true;
            }

            else if(matrix[row][col] < target){
                row++;
            }

            else if(matrix[row][col] > target){
                col--;
            }
        }
        return false;
    }
}