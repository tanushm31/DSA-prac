## Tips and Tricks:
- Test for a single digit number: `n%10==n`

## C++:
- To modify an array within a function:
```
//some random function
int func(int * arr[])
{
  //To change some element of array:
  (*arr)[i] = 10;
}

int main()
{
  int arr[5] = {1,2,3,4,5};
  func(&arr);
}
```

- To initialize a new array without specifying number of elements


```
// For Initializing array with name arr
int * arr;

// For finally giving it size:
int x = 10;
arr = new int[x];
```
