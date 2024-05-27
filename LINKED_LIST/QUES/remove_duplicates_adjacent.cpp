
Node *removeDuplicates(Node *head)
{
    //Write your code here
	Node*temp=head;
	if(head==NULL){return NULL;}
	while(temp->next!=NULL){
		if(temp->data==temp->next->data){
            temp->next = temp->next->next;
        }
		else{
			temp=temp->next;
		}
	}
	return head;
}