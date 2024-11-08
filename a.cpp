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
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int data){
        Node*temp=new Node(data);
        if(!temp){
            cout<<"OVEFLOWING"<<endl;
        }
        temp->data=data;
        temp->next=top;
        top= temp;
    }
    void pop(){
        Node*temp;
        if (top == NULL) {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else {
        temp=top;
        top=top->next;
        free(temp);
    }}
    void display(){
        Node*temp;
        if (top == NULL) {
            cout << "\nStack Underflow";
            exit(1);
        }
        else {
            temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }

};

int main(){
     Stack s;
 
    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
 
    // Display stack elements
    s.display();
    s.pop();
    s.display();
    
}
