/*Problem statement
Given an integer array A of size N, check if the input array can be divided in two groups G1 and G2 with following properties-

- Sum of both group elements are equal
- Group 1: All elements in the input, which are divisible by 5 
- Group 2: All elements in the input, which are divisible by 3 (but not divisible by 5). 
- Elements which are neither divisible by 5 nor by 3, can be put in either group G1 or G2 to satisfy the equal sum property. 
Group 1 and Group 2 are allowed to be unordered and all the elements in the Array A must belong to only one of the groups.



Return true, if array can be split according to the above rules, else return false.

Note: You will get marks only if all the test cases are passed.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 50
Sample Input 1 :
2
1 2
Sample Output 1 :
false
Sample Input 2 :
3
1 4 3
Sample Output 2 :
true
bool split(int arr[],int n,int si,int s3,int s5){
    if(n==0){return s3==s5;}
    if(arr[si]%3==0){
        s3+=arr[si];
    }
    else if(arr[si]%5==0){
        s5+=arr[si];
    }
    else{
        return split(arr, n-1, si+1, s3+arr[si], s5) || split(arr, n-1, si+1, s3, s5+arr[si]);

*/
#include <iostream>
using namespace std;

bool split(int arr[],int n,int si,int s3,int s5){
    if(n==0){return s3==s5;}
    if(arr[si]%3==0){
        s3+=arr[si];
    }
    else if(arr[si]%5==0){
        s5+=arr[si];
    }
    else{
        return split(arr, n-1, si+1, s3+arr[si], s5) || split(arr, n-1, si+1, s3, s5+arr[si]);
    }
    return split(arr, n-1, si+1, s3, s5);
}
	
bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
return split(input, size, 0, 0,0);
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
