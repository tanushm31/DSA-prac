#include <bits/stdc++.h>
// #include <list>
// #include <unordered_map>
using namespace std;
void printList(list<int> myList)
{
  list<int>::iterator iter;
  cout<<"List Goes Like:";
  for (iter = myList.begin();iter!=myList.end(); iter++)
  {
    cout<<*iter;
  }
  cout<<"\n";
}

void removeDups(list<int> * myList)
{
  //define a set for unique values
  unordered_set<int> newmap;
  list<int>::iterator iter;

  iter = (*myList).begin();
  while(iter!=(*myList).end())
  {
    // cout<<"List Elem :"<<*iter<<endl;
    // if specific element is not in the set
    if(newmap.find(*iter)==newmap.end())
    {
      newmap.insert(*iter);
      iter++;
    }
    else
    {
      // std::cout << "Technically here "<<*iter<<" should be removed" << '\n';
      list<int>::iterator iter2;
      iter2 = iter;
      iter++;
      (*myList).erase(iter2);
    }

    // iter++;
  }
}
int main(){
  cout<<"Hello Enter List Number: ";

  int n;
  cin>>n;
  list<int> myList;
  for(int i = 0;i<n;i++)
  {
    int x;
    cin >> x;
    myList.push_back(x);
  }
  cout<<"Before Removing Duplicates \n";
  printList(myList);

  removeDups(&myList);
  cout<<"After Removing Duplicates \n";
  printList(myList);
}
