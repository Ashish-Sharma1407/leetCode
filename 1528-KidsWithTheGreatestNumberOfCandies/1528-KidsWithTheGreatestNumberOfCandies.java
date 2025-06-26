// Last updated: 6/27/2025, 2:29:14 AM
class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maxCandy = Integer.MIN_VALUE;
        ArrayList <Boolean> result = new ArrayList<>();

        for(int index = 0; index < candies.length; index++){
            if(candies[index] > maxCandy){
                maxCandy = candies[index];
            }
        }
        for(int index = 0; index < candies.length; index++){
            if((candies[index] + extraCandies) >= maxCandy){
                result.add(true);
            }
            else{
                result.add(false);
            }
        }
        return result;
    }
}