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
    for(int i = 0;i<=top;i++)
    {
      cout<<arr[i]<<", ";
    }
    cout<<"\n";
  }

  bool push(int x)
  {
      if(top>=cap-1)
      {
        cout<<"STACK OVERFLOW\n";
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
  int peek()
  {
    return this->top;
  }
  bool isEmpty()
  {
    if(this->top==-1)
    {
      return true;
    }
    else{
      return false;
    }
  }
};

int main()
{
  Stack s(6);
  cout<<s.cap<<endl;
  cout<<s.top<<endl;
  int x;
  if(s.isEmpty())
  {
    cout<<"Stack is Empty";
  }
  else{
    cout<<"Stack Not Empty";
  }
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
  if(s.isEmpty())
  {
    cout<<"Stack is Empty";
  }
  else{
    cout<<"Stack Not Empty";
  }
  cout<<"Removed Element: "<<s.pop()<<"\n";
  s.printStack();





  return 0;
}
