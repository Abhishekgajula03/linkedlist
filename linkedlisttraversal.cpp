#include<bits/stdc++.h>
using namespace std;
class Node{ 
    public:
  int data;
  Node*next;
  Node(int data){
      this->data=data;
      this->next=NULL;
  }
};

Node*traverse(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*curr=head;
    for(int i=1;i<arr.size();i++){ 
        Node*temp=new Node(arr[i]);
        curr->next=temp;
        curr=temp;
    }
    return head;
}
int lengths(Node*head){
    Node*temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    } 
    return count;
}

int main(){
    vector<int>arr={2,3,4,5};
    Node*head=traverse(arr);
    
    Node*temp=head;
    while(temp){ 
        cout<<temp->data<<" ";
        temp=temp->next;
    }
      cout<<endl;
    int c=lengths(head);
    cout<<c;
}
