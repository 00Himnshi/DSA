/*Problem statement
You have been given a sorted integer array/list(ARR) and a number 'num'. 
\Find and return the total number of pairs in the array/list which sum to 'num'.

Note:
Given array/list can not contain duplicate elements. */
#include <iostream>
using namespace std;
int pairSum(int A[], int size, int K)
{
     // Write your code here.
     int i=0,j=size-1;int ans=0;
     while(i<j){
          if(A[i]+A[j]==K){
               i++;j--;
               ans++;
          }
          else if(A[i]+A[j]<K){
               i++;
          }
          else{j--;}
     }
     return ans;
}

int main()
{
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int k;
    cin>>k;
    int ans = pairSum(input, n, k);
    cout<<ans;
    return 0;
}