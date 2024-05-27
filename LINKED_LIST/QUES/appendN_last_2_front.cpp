


//solution1
Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
	if(head==NULL || head->next==NULL||n==0){return head;}
	Node*slow=head;
	Node*fast=head;
	for(int i=1;i<=n;i++){
		fast=fast->next;
	}
	while(fast->next!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	fast->next=head;
	head=slow->next;
	slow->next=NULL;
	return head;
}


//solution2

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
	if(head==NULL || head->next==NULL||n==0){return head;}
	Node*temp=head;
	Node*tail=head;int i=0;
	while(tail->next!=NULL){
		tail=tail->next;
		i++;
	}
	i++;
	int j=i-n-1;
	while(j--){
		temp=temp->next;
	}
	tail->next=head;
	head=temp->next;
	temp->next=NULL;
	return head;
}