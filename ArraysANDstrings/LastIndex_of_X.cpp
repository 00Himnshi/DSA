/*Problem statement
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.

Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.

You should start traversing your array from 0, not from (N - 1).

Do this recursively. Indexing in the array starts from 0.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8
Sample Output :
3
*/
int lastIndex(int input[], int size, int x) {
 
      if(size==0){
        return -1;
      }
      else if(input[size-1]==x){return size-1;}
      int si=lastIndex(input,size-1,  x);
      if(si==-1){return -1;}
      else{
        return si;
      }
}