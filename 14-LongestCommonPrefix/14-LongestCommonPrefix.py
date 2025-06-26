# Last updated: 6/27/2025, 2:31:34 AM
class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""

     
        min_str = min(strs, key=len)
        
        for i in range(len(min_str)):
            char = min_str[i]
            for word in strs:
                if word[i] != char:
                    return min_str[:i] 
        
        return min_str