// Last updated: 6/27/2025, 2:31:38 AM
class Solution {
public:
    int reverse(int num) {
        int ans = 0;

        while (num != 0) {
            int digit = num % 10;

            // Check for overflow before multiplying
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) return 0;

            ans = ans * 10 + digit;
            num /= 10;
        }

        return ans;
    }
};
