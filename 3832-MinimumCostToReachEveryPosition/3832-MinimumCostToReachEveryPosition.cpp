// Last updated: 6/27/2025, 2:28:55 AM
class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> answer(n);

        int min_cost = cost[0];
        answer[0] = cost[0];
    
        for (int i = 1; i < n; ++i) {
            min_cost = min(min_cost, cost[i]);
            answer[i] = min_cost;
        }
        return answer;
    }
};