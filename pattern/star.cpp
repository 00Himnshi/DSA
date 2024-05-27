/*Problem statement
Print the following pattern

Pattern for N = 4
    *
   *** 
  *****
 *******
*/
#include<iostream>
using namespace std;


int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int sp=n-i-1;
		while(sp--){cout<<" ";}
		int p=i+1;int k=i;
		while(p--){cout<<"*";}
		while(k--){
			cout<<"*";
		}
		cout<<endl;
	}
}
