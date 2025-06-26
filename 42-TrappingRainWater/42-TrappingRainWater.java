// Last updated: 6/27/2025, 2:31:04 AM
class Solution {
    public int trap(int[] height) {
        
        // AN ARRAY TO STORE THE LEFT MAX BOUNDARY VALUES
        int leftMaxBoundary[] = new int[height.length];
        leftMaxBoundary[0] = height[0];

        for(int index = 1; index < height.length; index++){
            leftMaxBoundary[index] = Math.max(height[index], leftMaxBoundary[index - 1]);
        }

        // AN ARRAY TO STORE THE RIGHT MAX BOUNDARY VALUES
        int rightMaxBoundary[] = new int[height.length];
        rightMaxBoundary[height.length - 1] = height[height.length - 1];

        for(int index = height.length - 2; index >= 0; index--){
            rightMaxBoundary[index] = Math.max(height[index], rightMaxBoundary[index + 1]);
        }

        // FOR CALCULATING THE WATER LEVEL
        int trappedWater = 0;
        for(int index = 0; index < height.length; index++){
            int waterLevel = Math.min(leftMaxBoundary[index], rightMaxBoundary[index]);

        // FOR CALCULATING TRAPPED WATER
        trappedWater += waterLevel - height[index];
        
        }

        return trappedWater;

    }
}