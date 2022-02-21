#include <bits/stdc++.h>
using namespace std;
class Stack{
public:
  int cap;
  int *arr;
  int top;
  Stack(int cap)
  {
    this->cap = cap;
    this->arr = new int[cap];
    this->top = -1;
  }
  void printStack()
  {
    cout<<"Stack Elements :";
    for(int i = 0;i<cap;i++)
    {
      cout<<arr[i]<<", ";
    }
    cout<<"\n";
  }

  bool push(int x)
  {
      if(top>=cap-1)
      {
        cout<<"STACK OVERFLOW";
        return false;
      }
      else{
        arr[++top] = x;
        cout<<x<<" inserted into stack \n";
        return true;

      }
  }
  int pop()
  {
    if(top<0)
    {
      cout<<"STACK UNDERFLOW \n";
      return 0;

    }
    else{
      int x = arr[top--];
      return x;
    }
  }
};

int main()
{
  Stack s(6);
  cout<<s.cap<<endl;
  cout<<s.top<<endl;
  int x;
  x = s.pop();
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(12499);
  s.push(6);
  s.push(7);
  s.printStack();
  s.push(8);
  s.push(9);




  return 0;
}
