#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            this->data = d;
            this->next = NULL;
        }
};
//inserting at the beginning of the linked list
void insert(Node* &head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}
//creating function to print the node
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    // Node*newnode=new Node(10);
    // Node*head=newnode;
    Node* head=NULL;
    print(head);
    insert(head,20);
    print(head);
    insert(head,40);
    print(head);
}