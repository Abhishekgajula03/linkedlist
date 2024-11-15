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
        cout<<root->data<<"->";
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

void insertany(Node*&head,Node*&tail,int position,int k){
    Node*temp=head;
    Node*newnode=new Node(k);
    if(position==1){
        insertatstart(head,k);
        return;
    }
    int count=1;
    while(count<position-1){ 
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertatend(tail,k);
        return;
    }
    newnode->next=temp->next;//pointing to 2
    temp->next=newnode;//was at 3 then pointing to 69
    
}
int main(){ 
    vector<int>arr={1,3,2,4};
    Node*root=buildnode(arr);
    Node*head=root;
    Node*tail=root;
    insertatstart(root,5);
    insertatend(root,9);
    insertany(head,tail,3,69);
    prints(root);
}
