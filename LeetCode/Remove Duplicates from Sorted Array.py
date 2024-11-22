class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        num = 0
        for i in range(1, len(nums)):
            if nums[i] != nums[num]:
                num += 1
                nums[num] = nums[i]
        return num + 1
