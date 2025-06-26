// Last updated: 6/27/2025, 2:28:53 AM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        set<int> s;
        int rep = -1;
        int n = pow(grid.size(),2);
        int actualSum = (n*(n+1))/2;
        int totalSum = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(s.find(grid[i][j]) != s.end()){
                    rep = grid[i][j];
                } else{
                    s.emplace(grid[i][j]);
                    totalSum = totalSum + grid[i][j];
                }
            }
        }
        int missing = actualSum - totalSum;
        return {rep,missing};
    }
};