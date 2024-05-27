#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertm(Node* &head,int val,int pos){
    Node* newnode=new Node(val);
    Node* temp=head;
    while(pos-2>0){
        temp=temp->next;
        pos--;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//to add some nodes
//inserting at the beginning of the linked list
void insert(Node* &head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}
int main(){
    Node*newnode=new Node(10);
    Node*head=newnode;
    insert(head,20);
    insert(head,40);
    print(head);
    insertm(head,50,3);
    print(head);
}