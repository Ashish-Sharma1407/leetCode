// Last updated: 6/27/2025, 2:30:33 AM
import java.util.*;

class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet<>();
        for (int num : nums) set.add(num);

        int maxLen = 0;

        for (int num : set) {
            if (!set.contains(num - 1)) { // Start of a new sequence
                int currentNum = num;
                int currentStreak = 1;

                while (set.contains(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }

                maxLen = Math.max(maxLen, currentStreak);
            }
        }

        return maxLen;
    }
}
