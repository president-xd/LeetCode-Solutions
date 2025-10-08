class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        size = len(nums)

        for i in range (0, size):
            if nums[i] >= target:
                return i
        return size    