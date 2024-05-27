/*Sample Input 2:
6
Sample Output 2:
666666
55555 
4444
333
22
1*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	  int n;
     cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
			cout<<n-i;
        }
        cout<<endl;
    }
}
