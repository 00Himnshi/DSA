/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int ans=0;
	for(int k=start+1;k<=end;k++){
		if(input[k]<=input[start]){
ans++;
		}
	}
	ans=ans+start;
	int temp=input[start];
	input[start]=input[ans];
input[ans]=temp;
 int i=start,j=end;
while(i<ans && j>ans){
	if(input[i]<=temp){
		i++;
	}
	else if(input[j]>temp){
		j--;
	}
	else{
		int t=input[j];
		input[j]=input[i];
		input[i]=t;
		i++;
		j--;
	}
}
	return ans;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start>=end){return ;}
	int c=partitionArray(input, start, end);
	quickSort(input, start,c-1);
	quickSort(input, c+1, end);
}