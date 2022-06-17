class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod=1
        oneZero = False
        twoZero = False
        for i in nums:
            if(i == 0 and oneZero==False):
                oneZero = True
            elif(i==0 and oneZero==True and twoZero==False):
                twoZero = True
            if(i!=0):
                prod = prod*i

        finList = nums
        # No Zeroes
        if(oneZero == False and twoZero==False):
            # print("No Zero")
            for i in range(0,len(nums)):
                # print(i)
                finList[i]= int(prod/nums[i])
        # print("Prod : ",prod)
        # One Zero
        if(oneZero == True and twoZero == False):
            # print("One Zero")
            for i in range(0,len(nums)):
                x = nums[i]
                if(x!=0):
                    # print(x)
                    finList[i]=0
                else:
                    # print(x)
                    finList[i]=prod
        #Two Or More Zeroes
        if(oneZero==True and twoZero==True):
            # print("Two Or More Zeroes")
            for i in range(0,len(nums)):
                finList[i]= 0
        # print("FINAL LIST: ",finList)
        return finList
