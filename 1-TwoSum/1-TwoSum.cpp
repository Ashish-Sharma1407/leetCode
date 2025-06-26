// Last updated: 6/27/2025, 2:31:45 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            int second = target - nums[i];
            if(m.find(second) != m.end()){
                return {m[second],i};
            } else{
                m.emplace(nums[i], i);
            }
        } 
        return {-1,-1};
    }
};