/*Problem statement
Write a program to do basic string compression. For a character which is consecutively repeated 
more than once, replace consecutive duplicate occurrences with the count of repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.*/
#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    // Write your code here.
    int i=0;int j=0;string ans="";
    while(j<input.size() && i<input.size()){
        char c=input[i];
        while(input[j]==c && j<input.size()){
            j++;
        }
        
        ans=ans+c;
        if (j - i != 1) {
            ans += to_string(j - i);
        }
        i=j;
    }
    return ans;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}