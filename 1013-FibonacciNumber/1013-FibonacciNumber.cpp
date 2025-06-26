// Last updated: 6/27/2025, 2:29:23 AM
class Solution {
public:
    int fib(int num) {
        if(num == 0) return 0;
        if(num == 1) return 1;
        int ans = fib(num - 1) + fib(num - 2);
        return ans;
    }
};