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
Node*buildnode(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*curr=head;
    int n=arr.size();
    for(int i=1;i<n;i++){
        curr->next=new Node(arr[i]);
        curr=curr->next;
    }
    return head;
}

void prints(Node*root){
    while(root){
        cout<<root->data;
        root=root->next;
    }
}
void insertatstart(Node*&root,int x){
    Node*temp=new Node(x);
    temp->next=root;
    root=temp;
}

void insertatend(Node*&root,int x){
    Node*temp=new Node(x);
    Node*last=root;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    last=temp;
}
int main(){ 
    vector<int>arr={1,3,2,4};
    Node*root=buildnode(arr);
    insertatstart(root,5);
    insertatend(root,9);
    prints(root);
}
