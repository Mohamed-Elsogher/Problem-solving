class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        newnums = nums1[:m]  
        newnums2 = nums2[:n]    
        merged = sorted(newnums + newnums2)  
        for i in range(len(merged)):
            nums1[i] = merged[i]
