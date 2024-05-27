#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int main(){
    Node* newnode=new Node(20);
    cout<<newnode->data<<" "<<newnode->next<<" "<<newnode->prev;
}