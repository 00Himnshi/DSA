/*Problem statement
For a given array/list(ARR) of size 'N,' find and return the 'Equilibrium Index' of the array/list.

Equilibrium Index of an array/list is an index 'i' such that the sum of elements at indices [0 to (i - 1)] is equal to the sum of elements at indices [(i + 1) to (N-1)]. One thing to note here is, the item at the index 'i' is not included in either part.

If more than one equilibrium indices are present, then the index appearing first in left to right fashion should be returned. Negative one(-1) if no such index is present.

Example:
Let's consider an array/list Arr = [2, 3, 10, -10, 4, 2, 9]  of size, N = 7.

There exist three equilibrium indices, one at 2, another at 3, and another at 5.

At index 2, the sum of all the elements to the left, [2 + 3] is 5, and the elements to its right, [-10 + 4 + 2 + 9] is also 5. Hence index 2 is an equilibrium index according to the condition we want to achieve. Mind it that we haven't included the item at index 2, which is 10, to either of the parts.

Similarly, we can see at index 3 and 5, the elements to its left sum up to 15 and 9 respectively and to the right, sum up to 15 and 9 respectively either. 

Hence the answer would be 2.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^6

Time Limit: 1 sec 
Sample Input 1 :
1
5
1 4 9 3 2
Sample Output 1 :
2
Sample Input 2 :
2
3
1 4 6
3
1 -1 4
Sample Output 2 :
-1
2
int findEquilibriumIndex(int *arr, int n)
{
    //Write your code here
    int ls=0,rs=0;
    for(int i=1;i<n;i++){
        rs+=arr[i];
    }
    for(int k=0;k<n;k++){
        if(rs==ls){
        return k;

*/
int findEquilibriumIndex(int *arr, int n)
{
    //Write your code here
    int ls=0,rs=0;
    for(int i=1;i<n;i++){
        rs+=arr[i];
    }
    for(int k=0;k<n;k++){
        if(rs==ls){
        return k;
        }
        ls+=arr[k];
        rs=rs-arr[k+1];
    }
    return -1;
}