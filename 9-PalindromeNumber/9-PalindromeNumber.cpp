// Last updated: 6/27/2025, 2:31:40 AM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        int original = x;
        int ans = 0;
        while(x != 0){
            int digit = x % 10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) return false;
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return (ans == original);
    }
};