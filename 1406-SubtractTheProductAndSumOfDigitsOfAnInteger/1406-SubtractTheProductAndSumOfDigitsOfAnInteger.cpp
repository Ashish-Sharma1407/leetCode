// Last updated: 6/27/2025, 2:29:19 AM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product = 1;
        int Sum = 0;
        while (n > 0){
            int num = n % 10;
            Product *= num;
            Sum += num;
            n /= 10;
        }
        int answer = Product - Sum;
        return answer;
    }
};