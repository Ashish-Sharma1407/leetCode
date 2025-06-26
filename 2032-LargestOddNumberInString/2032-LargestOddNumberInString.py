# Last updated: 6/27/2025, 2:29:01 AM
class Solution(object):
    def largestOddNumber(self, num):
        for i in range(len(num)-1, -1, -1):
            if int(num[i]) % 2 == 1:
                return num[:i+1]
        return ''