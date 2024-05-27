/*Problem statement
Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).

Return true or false.

Do it recursively.

E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false
bool checksequenece(char large[] , char*small) {
if(large[0]=='\0'){
    return 0;
}
if(small[0]=='\0'){return 1;}
bool ans;

if(small[0]==large[0]){
    ans=1;
    ans=checksequenece(large+1, small+1);

*/
#include<iostream>
using namespace std;

bool checksequenece(char large[] , char*small) {
if(large[0]=='\0'){
    return 0;
}
if(small[0]=='\0'){return 1;}
bool ans;

if(small[0]==large[0]){
    ans=1;
    ans=checksequenece(large+1, small+1);
}
else{
    ans=checksequenece(large+1,small);
}
return ans;
}

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
