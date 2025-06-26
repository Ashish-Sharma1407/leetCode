# Last updated: 6/27/2025, 2:30:25 AM
class Solution(object):
    def reverseWords(self, s):
        return ' '.join(s.strip().split()[::-1])

        