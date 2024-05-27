/*Problem statement
You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.

Note :
Given array/list can contain duplicate elements.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9

Time Limit: 1 sec
Sample Input 1:
1
7
1 2 3 4 5 6 7 
12
Sample Output 1:
5
Sample Input 2:
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10
Sample Output 2:
0
5


 Explanation for Input 2:
Since there doesn't exist any triplet with sum equal to 19 for the first query, we print 0.

For the second query, we have 5 triplets in total that sum up to 10. They are, (2, 8, 0), (2, 11, -3), (-5, 5, 10), (8, 5, -3) and (-6, 5, 11)
#include <algorithm>

int countpair(int arr[],int n,int num){
    int s=0,e=n-1;int ans=0;
    while(s<e){
        if(arr[s]+arr[e]>num){e--;}
        else if(arr[s]+arr[e]<num){s++;}
        else{
            if(arr[s]==arr[e]){
                int c=e-s+1;

*/
#include <algorithm>

int countpair(int arr[],int n,int num){
    int s=0,e=n-1;int ans=0;
    while(s<e){
        if(arr[s]+arr[e]>num){e--;}
        else if(arr[s]+arr[e]<num){s++;}
        else{
            if(arr[s]==arr[e]){
                int c=e-s+1;
                ans+=((c)*(c-1))/2;
return ans;
            }
            else{int cs=1,ce=1;
                while(s+1<e && arr[s+1]==arr[s]){
                    s++;
                    cs++;
                }
                while(e-1>s && arr[e-1]==arr[e]){
                    e--;
                    ce++;
                }
                ans+=ce*cs;
                s++;
                e--;
            }
        }
        
    }
    return ans;
}

int tripletSum(int *arr, int n, int num)
{
    sort(arr, arr + n);
    int tripletCount = 0;
	for(int i=0;i<n-2;i++){
        int ef=num-arr[i];
tripletCount+=countpair(arr+i+1 ,  n-i-1, ef);
    }
    return tripletCount;
}