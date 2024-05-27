/*Problem statement
Given a string ‘str’ and a pattern ‘pat’, you have to find all occurrences of the pattern in the string. You have to print the starting positions of all occurrences of the pattern in the string.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1<str.size()<500
1<=pat.size()<=str.size
Sample Input 1:
‘str’ = “heyhihey”
‘pat’ = “hey”
Sample Output 1:
0 5*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    // Write your code here
    string str,pat;
       cin>>str>>pat;

int ans=-1;
    for(int i=0;i<str.size();i++){
        string sub="";
        for(int j=i;j<str.size();j++){
            sub=sub+str[j];
            if(sub==pat){
                ans=i;
                cout<<ans<<" ";
                break;
            }
        }
    }
}