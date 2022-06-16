class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        visited = {}
        flag = False
        for index, value in enumerate(nums):
            if(value in visited):
                flag = True
                return flag
            visited[value]=index
        return flag
        
