# Last updated: 6/27/2025, 2:31:31 AM
class Solution(object):
    def isValid(self, s):
        stack = []
        bracket_map = {')': '(', '}': '{', ']': '['}

        for char in s:
            if char in bracket_map:
                top_element = stack.pop() if stack else '#' 
                if bracket_map[char] != top_element:
                    return False
            else:
                stack.append(char)  
        
        return not stack 