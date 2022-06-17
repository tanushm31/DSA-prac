class Solution:
    def findMin(self, nums: List[int]) -> int:
        if(len(nums)==0):
            return -1
        if(len(nums)==1):
            return nums[0]
        left = 0
        right = len(nums)-1
        if(nums[left]<nums[right]):
            return nums[left]
        while(left < right):

            # If higher mid Point: then use mid =  int(left+(right-left)/2)
            # If Lower mid Point: then use mid =  int((left+right)/2)
            mid =  int((left+right)/2)
            print(left,mid,right)
            if(mid < len(nums)-1 and nums[mid+1]  < nums[mid]):
                return nums[mid+1]

            # if left part is sorted
            if(nums[left] < nums[mid]):
                # look on the right side
                left = mid

            # if right part is sorted
            else:
                # look on the left side
                right = mid
