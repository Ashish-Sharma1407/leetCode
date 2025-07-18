// Last updated: 6/27/2025, 2:31:11 AM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size() - 1;
        for(int i = n-1; i >= 0; i--){
            if(nums[i] <nums[i+1]){
                pivot = i;
                break;
            }
        }
        // Check the value of pivot
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i = n; i > pivot; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        reverse(nums.begin() + pivot+1, nums.end());
        
    }
};