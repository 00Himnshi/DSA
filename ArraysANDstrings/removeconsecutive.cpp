/*Problem statement
You are given a string 'STR' consisting of lower and upper case characters. 
You need to remove the consecutive duplicates characters, and return the new string.
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
*/
string removeConsecutiveDuplicates(string str) 
{
    //Write your code here
    string ans="";
    for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]  && (i)!=str.size()-1){
            continue;
        }
        else{ans=ans+str[i];}
    }
    return ans;
}
#include <iostream>
#include <string>
using namespace std;


int main() {
    
    string s;
    cin >> s;
    s = removeConsecutiveDuplicates(s);
    cout << s;
}