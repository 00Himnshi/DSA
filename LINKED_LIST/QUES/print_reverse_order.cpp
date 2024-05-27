void print(Node*head){
	if(head==NULL){
		return;
	}
 	print(head->next);
	cout<<head->data<<" ";
}
void printReverse(Node *head)
{
    //Write your code here
	print(head);
}