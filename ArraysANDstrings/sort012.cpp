/*
You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
You need to change in the given array itself. So no need to return or print anything.
Input format :

Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)

Output Format :

Updated array elements (separated by space)

Constraints :
1 <= n <= 10^6
Sample Input:

7
0 1 2 0 2 0 1

Sample Output:

0 0 0 1 1 2 2 

*/
void sort012(int arr[], int n)
{
    //Write your code here
   int i=0,j=n-1,m=0;
   while(m<=j){
       if(arr[m]==2){
           swap(arr[j--],arr[m]);
       }
       else if(arr[m]==0){
           swap(arr[i++],arr[m++]);
       }
       else{
           m++;
       }

   }
}
void sort012(int *arr, int n)
{
    //Write your code here
    int i=0,j=0,k=n-1;
    while(j<=k){
       if(arr[j]==0){
           int t=arr[j];
           arr[j]=arr[i];
arr[i]=t;
i++;j++;
       }
       else if(arr[j]==1){
           j++;
       }
       else{
           int m=arr[j];
           arr[j]=arr[k];
           arr[k]=m;
           k--;
       }
    }
}
