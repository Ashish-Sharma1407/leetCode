// Last updated: 6/27/2025, 2:29:50 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }
    }
};