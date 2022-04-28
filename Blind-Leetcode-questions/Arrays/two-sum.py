# x = input()
y = int(1/2)
arr=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25]

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
print(binSearch(arr,18,0))
# def search(x,target,arr):
#
#     num=target-x
#     mid=len(arr)/2
#     index = mid
#     while(True):
#         mid=len(arr)/2
#         if(len(arr)==1):
#             if(arr[0]==target):
#                 index =
#         else:
#             if(num<arr[mid]):
#                 arr=arr[:mid]
#             elif(num>arr[mid]):
#                 arr=arr[mid+1:]
#             else:
#                 index = mid
#                 break
# print("Hello World ", y)
# print(len(arr[0:0]))
