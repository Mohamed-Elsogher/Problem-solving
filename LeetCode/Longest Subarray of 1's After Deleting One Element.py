class Solution(object):
    def longestSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        start = 0 
        CountZero = 0 
        Max_length = 0 
        for end in range(len(nums)):
            if (nums[end] == 0):
                CountZero += 1
            while CountZero > 1 :
                if(nums[start] == 0):
                    CountZero -=1
                start +=1
            Max_length = max(Max_length , end - start)       
        return Max_length
