## Tips and Tricks:
- Test for a single digit number: `n%10==n`

## C++:
- ##### Pointer To An Array
Consider the following array containing the first five numbers of the Fibonacci sequence.
```
int fibSeq[5] = {1,1,2,3,5};
```
Let’s declare a pointer fibPtr to point this array.
```
int* fibPtr;
fibPtr = fibSeq;
```
![Pointer To Array Diagram](https://www.softwaretestinghelp.com/wp-content/qa/uploads/2019/04/Pointer-to-an-array.png)
###### expression **(fibPtr + 1)** will point to the second element of the array and so on.

- To modify an array within a function:
```
//some random function
int func(int * arr)
{
  //To change some element of array:
  (*arr)[i] = 10;
}
```
```
int main()
{
  int arr[5] = {1,2,3,4,5};
  func(&arr);
}
```

- To initialize a new array without specifying number of elements:
```
// For Initializing array with name arr
int * arr;
```
```
// For finally giving it size:
int x = 10;
arr = new int[x];
```
