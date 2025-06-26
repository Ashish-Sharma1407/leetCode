// Last updated: 6/27/2025, 2:29:36 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixSum(n,0);
        int count = 0;

        prefixSum[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        unordered_map<int, int> m;
        for(int j = 0; j < n; j++){
            if(prefixSum[j] == k) count++;
            int rem = prefixSum[j] - k;
            if(m.find(rem) != m.end()){
                count = count + m[rem];
            } 
            if(m.find(prefixSum[j])== m.end()){
                m.emplace(prefixSum[j], 1);
            }else{
                m[prefixSum[j]]++;
            }
        }
        return count;
    }
};