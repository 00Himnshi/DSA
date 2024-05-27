/*Problem statement
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 30
Sample Input 1 :
4
Sample Output 1 :
7
Sample Input 2 :
5
Sample Output 2 :
13
int staircase(int N){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    
    
    
int staircase(int N){

    if(N==1){return 1;}
    if(N==2){return 2;}
   if(N==3){return 4;}
    int ans=0;
    ans=staircase(N-3)+staircase(N-1)+staircase(N-2);
    return ans;
}