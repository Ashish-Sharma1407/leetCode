// Last updated: 6/27/2025, 2:31:41 AM
import java.util.*;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            while (set.contains(s.charAt(right))) {
                set.remove(s.charAt(left++));
            }

            set.add(s.charAt(right)); // Add current character to the set
            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    }
}
