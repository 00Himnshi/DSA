/*Problem statement
Print the following pattern for the given number of rows.

Note: N is always odd.


Pattern for N = 5

  *
 ***
*****
 ***
  *

The dots represent spaces.*/

#include<iostream>
using namespace std;

int main() {
    int n;cin>>n;
    for(int i=0;i<=n/2;i++){
        int sp=n/2-i;
        while(sp>0){
            cout<<" ";sp--;
        }
        int j=i+1;
        while(j--){cout<<"*";}
        int k=i;
        while(k--){cout<<"*";}
        cout<<endl;
    }int k=n-2;int s;
    for(int m=1;m<=n/2;m++){
        s=m;
        while(s--){cout<<" ";}
        int c=k;
        while(c--){cout<<"*";}
        k=k-2;
        cout<<endl;
    }
}