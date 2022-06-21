// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <fstream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
// You need to complete this function


class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        // Your Code Here
        long long first = 1;
        long long second = 1;
        if(number == 0)
        {
            return 0;
        }
        if(number == 1 || number == 2)
        {
            return 1;
        }
        long long final;

        for(int i=3;i<=number;i++)
        {
            final=first+second;
            first = second;
            second = final;
        }
        return final;

    }
};

// { Driver Code Starts.

int main()
 {
    //taking testcases
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        //taking nth fibonacci
        //to be found
        int number;
        cin>>number;

        //calling function findNthFibonacci()
        //and passing number as parameter
        Solution obj;
        cout<<obj.findNthFibonacci(number)<<endl;
    }

	return 0;
}
  // } Driver Code Ends
