// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<int>& arr, int n, int k){
        // code here
        int i = 0;
        int g =0;
        while(i<n)
        {
            // cout<<"I = "<<i<<endl;
            int left;
            if((n-(g*k))>k)
            {
             left = k;
            }
            else
            {
                left = (n-(g*k))%k;
                // cout<<"(n-(g*k)) mod 3: "<<left<<endl;
            }
            int temp[left];
            for(int j = 1;j<=left;j++)
            {
                if(((g*k)+left-j)<n)
                {

                 temp[j-1]= arr[(g*k)+left-j];
                }
            }
            // cout<<"TEMP:";
            for (int z = 0;z<left;z++)
            {
                cout<<temp[z]<<" ";
            }
            cout<<endl;
            for(int j = 1;j<=left;j++)
            {
              // cout<<"Entered \n";
                arr[(g*k)+left-j]=temp[j-1];
            }
            g+=1;
            i+=left;
            //cout<<'\n';
        }
        for (int i = 0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cout<<"Enter N: ";
        cin >> n;

        vector<int> arr;
        // int arr[n];
        cout<<"Enter K: ";
        int k;
        cin >> k;
        cout<<"Enter Arr Elements:\n";
        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        cout<<"Enter Function : \n";
        ob.reverseInGroups(arr, n, k);
        cout<<"Exit Function \n";
        cout<<"Arr Final "<<endl;
        for(int i = 0; i<n; i++){

            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

  // } Driver Code Ends
