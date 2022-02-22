#include "bits/stdc++.h"
using namespace std;

void func(int  arr[])
{
  (arr)[4] = 10;
}
int main() {
  int arr[5] = {1,23,42,5,62};
  cout<<arr[4]<<endl;
  func(arr);
  cout<<arr[4]<<endl;
  return 0;

}
