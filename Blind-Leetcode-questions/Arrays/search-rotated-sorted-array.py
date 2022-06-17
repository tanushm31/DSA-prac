class Solution:
    def search(self, nums: List[int], target: int) -> int:
        length = len(nums)

        left = 0
        right = length - 1

        while(left<=right):
            mid = (left + right) // 2
            print("Left,Mid,Right :",left,",",mid,",",right)
            if(target == nums[mid]):
                return mid

            # if left portion is sorted
            if(nums[left] <= nums[mid]):
                print("Left is Sorted")
                if(target > nums[mid]):
                    left = mid + 1
                elif(target < nums[left]):
                    left = mid + 1
                else:
                    right = mid - 1

            # if left portion is not sorted this means right portion must be sorted
            else:
                print("Right is Sorted")
                if(target > nums[right] or target < nums[mid]):
                    right = mid - 1
                else:
                    left = mid + 1

        return -1
