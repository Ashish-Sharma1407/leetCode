// Last updated: 6/27/2025, 2:28:57 AM
class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int count = 0; // Initialize count to 0
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0 && num % digit == 0) { // Avoid division by zero
                count++;
            }
            temp = temp / 10;
        }
        return count;
    }
};
