# x = input()
y = int(1/2)
arr=[]

def binSearch(arr,n,start):
    print("Right Now Arr :",arr, "; N = ", n, "; start=",start)
    if(len(arr)==1):
        # print("Case 1")
        if(n==arr[0]):
            return start
        else:
            # print("Case 2")
            return -1
    elif(len(arr)<1):
        return -1
    else:
        # print("Case 3")
        mid = int(len(arr)/2)
        # print ("Mid = ", mid, "; arr[mid]=", arr[mid])
        if(n<arr[mid]):
            # print("A")
            return binSearch(arr[:mid],n,start)
        elif(n>arr[mid]):
            # print("B")
            return binSearch(arr[mid+1:],n,start+mid+1)
        else:
            # print("C")
            # print("Mid + Start = ",mid +start)
            return mid+start
def twoSumUtil(arr,target,start):
    if(len(arr)==2):
        if(arr[0]+arr[1]==target):
            return [arr[0],arr[1]]
        else:
            return -1


    arr = sort(arr)
    n = target-arr[0]
    x = binSearch(arr[1:],n,0)+start
    if(x>=1):
        return [0,arr[x]]
    else:
        return twoSumUtil(arr[1:],target,start+1)
def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        twoSumUtil(nums,target)


print(binSearch(arr,18,0))
