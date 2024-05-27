/*Problem statement
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in the output array (in increasing order).

Do this recursively. Indexing in the array starts from 0.

Hint:
Try making a helper function with the required arguments and call the helper function from the allIndexes function.
*/
void findIndices(int input[], int size, int x, int output[], int &k, int currIndex){
	if(currIndex==size){
		return;
	}
	if(input[currIndex]==x){
		output[k] = currIndex;
		k++;
	}
	findIndices(input,size,x,output,k,++currIndex);
}

int allIndexes(int input[], int size, int x, int output[]){
	int k = 0;
	findIndices(input,size,x,output,k,0);
	return k;
}
