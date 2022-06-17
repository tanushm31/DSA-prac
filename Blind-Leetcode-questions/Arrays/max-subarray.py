class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = -10000
        curSum = 0
        for i in range(len(nums)):
            if curSum < 0:
                curSum = 0
            curSum += nums[i]
            maxSum = max(curSum,maxSum)
        return maxSum
