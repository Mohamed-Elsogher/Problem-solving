class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        str =''
        for char in s :
            if char.isalnum():
                str += char.lower()
        return str == str[::-1]        
        
