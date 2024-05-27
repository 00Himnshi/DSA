#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        //pointer to the next node
        Node * next;
        //constructor-used to initialise data members
        Node(int dataValue){
            //given value can be put in data
            this->data=dataValue;
            this->next=NULL;
        }
};
int main(){
    Node * n1=new Node(200);
    cout<<n1->data<<" "<<n1->next;
}