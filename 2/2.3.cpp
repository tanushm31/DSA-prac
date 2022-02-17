#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node * next;
  Node()
  {
      data = 0;
      next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }


};
// (*ptr).member is equal to ptr -> member
class Linkedlist
{
public:
  Node * head;
  Linkedlist()
  {
    this->head = NULL;
  }
  void insertNode(int data)
  {
    Node * newNode = new Node(data);
    if(this->head == NULL){
      this->head = newNode;
    }
    else
    {
      Node * temp = head;
      while(temp->next !=NULL){
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
  void printList()
  {
    Node * temp = head;
    while(temp->next !=NULL){
      cout<<temp->data<<", ";
      temp = temp->next;
    }
    cout<<temp->data<<", ";
    cout<<"\n";

  }

};

void deleteMiddle(Node * curr)
{
  Node * newNode = new Node(curr->data);
  while(curr->next->next != NULL)
  {
    curr->data = curr->next->data;
    // Node * tmp = new Node(curr->next->data);

  }
  curr->next = NULL;
}

int main() {
  int n;
  cin>>n;
  // forward_list <int> arr;
  Linkedlist* arr = new Linkedlist();
  for (int i = 0; i < n; i++) {
    int x;
    cin>>x;
    arr->insertNode(x);
    deleteMiddle(arr->head->next->next);
    // cout<<"Added";
  }
  cout<<"Done";
  arr->printList();
  return 0;
}
