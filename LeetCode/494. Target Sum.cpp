from typing import List

class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        memo = {}
        
        def dp(index: int, curr_sum: int) -> int:
            if index < 0:
                return 1 if curr_sum == target else 0
            
            if (index, curr_sum) in memo:
                return memo[(index, curr_sum)]
            
            positive = dp(index - 1, curr_sum + nums[index])
            negative = dp(index - 1, curr_sum - nums[index])
            
            memo[(index, curr_sum)] = positive + negative
            return memo[(index, curr_sum)]
        
        return dp(len(nums) - 1, 0)
