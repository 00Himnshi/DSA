/*Problem statement
Given k, find the geometric sum i.e.

1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
Note :
using recursion.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= k <= 1000
Sample Input 1 :
3
Sample Output 1 :
1.87500
Sample Input 2 :
4
Sample Output 2 :
1.93750
Explanation for Sample Input 1:
1+ 1/(2^1) + 1/(2^2) + 1/(2^3) = 1.87500
int power(int x, int n) {

if(n==0){return 1;}
int num=power(x,  n-1);
return x*num;
}
double geometricSum(int k) {
    if (k == 0) {
        return 1;
    }

*/


int power(int x, int n) {

if(n==0){return 1;}
int num=power(x,  n-1);
return x*num;
}
double geometricSum(int k) {
    if (k == 0) {
        return 1;
    }
    double term=1.0/power(2,k);
   
    return term+geometricSum(k-1);
}