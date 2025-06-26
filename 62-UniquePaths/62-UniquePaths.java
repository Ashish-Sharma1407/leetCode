// Last updated: 6/27/2025, 2:30:53 AM
class Solution {
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m][n];

        // Fill the DP table with number of ways to reach each cell
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (i == 0 || j == 0) {
                    dp[i][j] = 1;  // Only one way to reach first row or first column
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }

            }
        }

        return dp[m - 1][n - 1];
    }
}
