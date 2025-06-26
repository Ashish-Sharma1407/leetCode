// Last updated: 6/27/2025, 2:30:30 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val: nums){
            ans = ans ^ val;
        }
        return ans;
    }
};