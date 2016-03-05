class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        map = {}
        for i, v in enumerate(nums):
            if target - v in map.keys():
                return map[target - v], i
            else:
                map[v] = i