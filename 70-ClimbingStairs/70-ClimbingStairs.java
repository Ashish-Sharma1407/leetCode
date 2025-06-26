// Last updated: 6/27/2025, 2:30:52 AM
class Solution {
    public int climbStairs(int n) {
        if (n <= 2) return n;
        int first = 1, second = 2;
        for (int i = 3; i <= n; i++) {
            int temp = second;
            second += first;
            first = temp;
        }
        return second;
    }
}
