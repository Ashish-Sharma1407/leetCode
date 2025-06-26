// Last updated: 6/27/2025, 2:30:06 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            } else{
                s.emplace(nums[i]);
            }
        }
        return false;
    }
};