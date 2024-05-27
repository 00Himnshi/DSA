/*Problem statement
Reverse the given string word-wise. The last word in the given string should come at 1st place, the last-second word at 2nd place, and so on. Individual words should remain as it is.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= |S| <= 10^5
where |S| represents the length of string, S.
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string ans="";string word;
    for(int i=input.size()-1;i>=0;i--){

*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string ans="";string word;
    for(int i=input.size()-1;i>=0;i--){
        if(input[i]==' ' || i==0){
            if(i==0){word+=input[i];}
            reverse(word.begin(),word.end());
            ans+=word+' ';
            word="";
        }
        else{
            word+=input[i];
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}