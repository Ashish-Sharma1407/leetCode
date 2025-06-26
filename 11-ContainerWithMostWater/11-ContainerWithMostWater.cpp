// Last updated: 6/27/2025, 2:31:37 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        while(left < right){
            int width = right - left;
            int length = min(height[left], height[right]);
            int water = length * width;
            maxWater = max(maxWater, water);

            if(height[left] < height[right]){
                left++;
            } else{
                right--;
            }
            
        }
        return maxWater;
    }
};