# Last updated: 6/27/2025, 2:29:10 AM
class Solution(object):
    def check(self, nums):
        count = 0
        n = len(nums)
        for i in range(n):
            if nums[i] > nums[(i+1)%n]:
                count += 1
        return count <= 1
        