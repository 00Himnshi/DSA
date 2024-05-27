#include<iostream>
using namespace std;
/*1 return statements(line:23and 39) are important
  2 while traversing to find correct pos to insert we use cnt<pos-1 (LINE:31)
  3 edge case when pos=1 or pos =last should be handeled carefully (LINE :37) */
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
//to insert at any position in a doubly linked list
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
    }
}
int main(){
    Node*head=NULL;
    insert(head,12,1);
    insert(head,10,2);
    print(head);
}