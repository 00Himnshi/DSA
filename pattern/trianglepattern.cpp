/*Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 5

           1
          232
         34543
        4567654
       567898765

The dots represent spaces.*/

#include <iostream>
using namespace std;

int main() {
int i=1,n,j,k,x;
cin>>n;

while(i<=n){j=1;
    while(j<=n-i){
    cout<<" ";
    j++;}
  j=1;
  x=i;
while(x<=2*i-1){
    cout<<x;
    x++;}
j=1;
 k=2*i-2;
while(j<=i-1){
    j++;
    cout<<k;
    k--;
}
i++;
cout<<endl;

}}