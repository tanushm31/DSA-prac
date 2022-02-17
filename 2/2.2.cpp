#include <bits/stdc++.h>
using namespace std;
void kToLast(list<int> * arr,int * k)
{
  list<int>::iterator iter,iter2;
  // iter = (*arr).begin();
  iter2 =  ((*arr).end());
  for (int i = 0; i < (*k); i++) {
    iter2--;

  }

  cout<<"Kth From the Last Element :"<<*iter2<<"\n";

}
void kToLast2(list<int> * arr,int * k)
{
  list<int>::iterator iter,iter2;

  iter2 = (*arr).begin();
  int x=0;
  for(iter = (*arr).begin();iter!=(*arr).end();iter++){
    x++;
    if(x>(*k)){
      iter2++;
    }

  }
  cout<<"Kth From the Last Element :"<<*iter2<<"\n";
}

int main() {
  cout<<"Number of elements in linked list :";
  int n;
  cin>>n;

  list<int> arr;
  cout<<"Enter elements in linked list :";
  for(int i = 0; i < n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
  cout<<"Enter K: ";
  int k;
  cin>>k;
  if(n<=k)
  {
    cout<<"List is Small";

  }
  else{
    kToLast(&arr,&k);
    kToLast2(&arr,&k);

  }

  return 0;
}
