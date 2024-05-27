/*Sample Input 2:
4
Sample Output 2:
      1 
     12
    123
   1234
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
     cin>>n;
   int sp;int row=1;int num;
   while(row<=n){
	   sp=n-row;
	   num=1;
	   while(sp>0){
		   cout<<" ";
		   sp--;
	   }
	   while(num<=row){
		   cout<<num;
		   num++;
	   }
	   cout<<endl;
	   row++;
   }
}