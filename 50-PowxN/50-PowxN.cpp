// Last updated: 6/27/2025, 2:31:00 AM
class Solution {
public:
    double myPow(double x, int n) {
        long binaryForm = n;
        if(binaryForm < 0){
            x = 1/ x;
            binaryForm = -binaryForm;
        }
        double ans = 1;

        while(binaryForm > 0){
            if(binaryForm % 2 == 1){
                ans =  ans * x;
            }
            x = x * x;
            binaryForm = binaryForm / 2;
        }
        return ans;
        
    }
};