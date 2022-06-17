## Tips and Tricks:
- Test for a single digit number: `n%10==n`
- Binary Search: 
  - If HIGHER Mid Point: then use   `mid =  int(left + (right - left) / 2)`
 -If LOWER Mid Point: then use  `mid =  int((left + right) / 2)`

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
## Python:
- Enumerate() in Python

#### Code:
```
# Python program to illustrate
# enumerate function
l1 = ["eat", "sleep", "repeat"]
s1 = "geek"

# creating enumerate objects
obj1 = enumerate(l1)
obj2 = enumerate(s1)

print ("Return type:", type(obj1))
print (list(enumerate(l1)))

# changing start index to 2 from 0
print (list(enumerate(s1, 2)))
```

### Output:

```
Return type:
[(0, 'eat'), (1, 'sleep'), (2, 'repeat')]
[(2, 'g'), (3, 'e'), (4, 'e'), (5, 'k')]
```

- How to check if a KEY exists in Dictionary?

```
if key in dict:
  # do something
```
