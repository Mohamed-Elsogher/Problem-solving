class Solution(object):
    def clearDigits(self, s):
        """
        :type s: str
        :rtype: str
        """
        str = []

        for char in s:
            if char.isdigit():
                if str:
                    str.pop()
            else:
                str.append(char)

        return ''.join(str)
