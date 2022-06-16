class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        visited={}
        for index,value in list(enumerate(nums)):
            remainder = target-value
            if(remainder in visited):
                x = sorted([index,visited[remainder]])
                return x
            visited[value]=index
