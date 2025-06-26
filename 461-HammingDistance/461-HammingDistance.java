// Last updated: 6/27/2025, 2:29:41 AM
class Solution {
    public int hammingDistance(int x, int y) {
        return Integer.bitCount(x ^ y);
    }
}
