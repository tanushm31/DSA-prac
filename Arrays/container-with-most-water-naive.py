def maxArea(self, height: List[int]) -> int:
    rows = len(height)
    cols = len(height)

    maxProd = 0
    for i in range(0,rows):
        for j in range(0,cols):
            #x = min(height[i],height[j])*mat[i][j]
            x = min(height[i],height[j])*(j-i)
            maxProd = max(maxProd,x)
    # print("Max Prod :",maxProd)
    return maxProd
