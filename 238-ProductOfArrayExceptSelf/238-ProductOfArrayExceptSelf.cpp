// Last updated: 6/27/2025, 2:29:56 AM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        // FOR PREFIX VECTOR
        for(int i = 1; i < nums.size(); i++){
            ans[i] = ans[i-1] * nums[i-1];
        }
        //FOR SUFFIX VECTOR
        int suffix = 1;
        for(int i = n-2; i >= 0; i--){
            suffix = suffix * nums[i + 1];
            ans[i] = ans[i] * suffix;
        }
        return ans;
    }
};