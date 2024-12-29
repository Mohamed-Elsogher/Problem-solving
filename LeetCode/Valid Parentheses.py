class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in s:
            if i in '{[(':
                stack.append(i)
            elif i in '}])':
                if len(stack) == 0:
                    return False
                top = stack.pop()
                if (i == '}' and top != '{') or \
                   (i == ']' and top != '[') or \
                   (i == ')' and top != '('):
                    return False
        return len(stack) == 0
