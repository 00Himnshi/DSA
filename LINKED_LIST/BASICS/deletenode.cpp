// //{ Driver Code Starts
// // C program to find n'th Node in linked list
// #include <stdio.h>
// #include <stdlib.h>
// #include<iostream>
// using namespace std;

// /* Link list Node */
// struct Node
// {
//     int data;
//     struct Node* next;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };

// void append(struct Node** head_ref, struct Node **tail_ref,
//            int new_data)
// {
//     struct Node* new_node = new Node(new_data);
    
//     if (*head_ref == NULL)
//        *head_ref = new_node;
//     else
//        (*tail_ref)->next = new_node;
//     *tail_ref = new_node;
// }

// /* Function to get the middle of the linked list*/
// struct Node* deleteNode(struct Node *head,int );

// void printList(Node *head)
// {
//    while (head != NULL)
//    {
//       cout << head->data << " ";
//       head = head->next;
//    }
//    cout << "\n";
// }

// /* Driver program to test above function*/
// int main()
// {
//   int T, i, n, l;

//     cin>>T;

//     while(T--){
//     struct Node *head = NULL,  *tail = NULL;

//         cin>>n;
//         for(i=1;i<=n;i++)
//         {
//             cin>>l;
//             append(&head, &tail, l);
//         }

// 	int kk;
// 	cin>>kk;
//     head = deleteNode(head,kk);
//     printList(head);
//     }
//     return 0;
// }

// } Driver Code Ends


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* temp=head;
    Node* prev=NULL;
    if(x==1){
        head=head->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    while(--x){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
    return head;
}
// Deletes middle of linked list and returns head of the modified list
//METHOD 1
Node* deleteMid(Node* head)
{
    // Your Code Here
    int size=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        size++;
    }
    if(size==1||head==NULL){return NULL;}
    temp=head;Node* prev=NULL;
    for(int i=0;i<size/2;i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
    return head;
}