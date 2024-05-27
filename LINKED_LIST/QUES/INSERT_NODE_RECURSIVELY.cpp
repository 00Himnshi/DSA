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
//SOLUTION 1
Node* InsertNode(Node *head, int pos, Node* newNode)
{
    if(head==NULL){
        return head;
    }
    if(head->next==NULL && pos==1 ){
        head->next=newNode;
        return head;
    }
    if(pos==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node*x=InsertNode(head->next, pos-1, newNode);
    head->next=x;
    return head;
   
}
//SOLUTION2-better
Node* InsertNode(Node *head, int pos, Node* newNode)
{
    if(head==NULL){
        return newNode;
    }
 
    if(pos==0){
        newNode->next=head;
        return newNode;
    }
    Node*x=InsertNode(head->next, pos-1, newNode);
    head->next=x;
    return head;
   
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
