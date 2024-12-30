class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        my_arr = s.split()
        last_word = my_arr[-1]
        return len(last_word)
        
