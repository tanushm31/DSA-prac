
def maxArea(self, height: List[int]) -> int:
    rows = len(height)
    cols = len(height)
    i = 0
    j = rows - 1
    currArea = 0
    while(True):
        currArea = max(min(height[i],height[j])*(j-i),currArea)
        if(height[i]<height[j]):
            i+=1
        else:
            j-=1
        if(i==j):
            break
    return currArea
