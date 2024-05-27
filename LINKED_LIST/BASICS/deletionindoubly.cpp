#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
};
/*deletion in a doubly linked list*/ 
//to insert at any position in a doubly linked list
void del(Node* &head,int pos){
    if(pos==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int cnt=1;
    Node*curr=head;
    Node*temp=NULL;
    while(cnt<pos){
        temp=curr;
        curr=curr->next;
        cnt++;
    }
    if (curr->next!=NULL)
    {
        curr->next->prev = temp; // This line is essential to maintain the integrity of the linked list.
    }
    temp->next=curr->next;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}
void insert(Node* &head,int data,int pos){
    if(pos==1){
        Node* temp=new Node();
        temp->data=data;
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        return;
    }

    Node *nodetoinsert = new Node();
    nodetoinsert->data = data;
    Node *temp = head;
    int c = 1;
    while (c < pos-1)
    {
        temp = temp->next;
        c++;
    }
    if (temp->next == NULL)
    {
        temp->next = nodetoinsert;
        nodetoinsert->prev = temp;
        return;
    }

    temp->next->prev = nodetoinsert;
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void print(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main(){
    Node*head=NULL;
    insert(head,12,1);
    insert(head,10,2);
    insert(head,13,3);
    insert(head,10,4);
    insert(head,27,5);
    print(head);
    del(head,5);
    print(head);
}