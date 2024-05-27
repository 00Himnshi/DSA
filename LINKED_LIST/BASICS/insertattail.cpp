#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
//METHOD 1
// void insert(Node*&tail,int val){
//     Node* temp=new Node(val);
//     tail->next=temp;
//     tail=tail->next;
// }
void insert2(Node*&head,int val){
    Node* in=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //found the current last node's adress in temp
    temp->next=in;
}
void print(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main(){
    Node* newnode=new Node(10);
    Node*head=newnode;
    // Node*tail=newnode;-----------method1
    print(head);
    // insert(tail,20);
    insert2(head,20);
    print(head);
    // insert(tail,30);
    insert2(head,30);
    print(head);
    // insert(tail,40);
    insert2(head,40);
    print(head);
}