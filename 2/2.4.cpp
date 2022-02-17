#include <bits/stdc++.h>
using namespace std;
void printList(list<int> * arr)
{
  list<int>::iterator iter;
  for (iter=(*arr).begin();iter!=(*arr).end();iter++)
  {
    cout<<*iter<<" ";
  }
  cout<<"\n";
}

int main() {
int count;
cin>>count;
cout<<"Enter List elements :\n";
  list<int> arr;
  for (int i = 0; i < count; i++) {
    int ip;
    cin>>ip;
    arr.push_back(ip);
  }
  cout<<"Enter Separtator : ";
  int k;
  cin>>k;
  // cout<<
  list<int> arr2;
  list<int>::iterator iter;
  for (iter = arr.begin(); iter != arr.end(); iter++) {
    if((*iter)<k)
    {
      arr2.push_front(*iter);
    }
    else{
      arr2.push_back(*iter);
    }

  }

  cout<<"Initl List :";
  printList(&arr);

  cout<<"Final List :";
  printList(&arr2);
  return 0;
}
