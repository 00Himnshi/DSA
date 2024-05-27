/*Problem statement
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.

Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false*/
#include <iostream>
#include <cstring>
using namespace std;
bool isPermutation(char char1[], char char2[]) {
    // Write your code here
    int count[26]={0};
    for(int i=0;char1[i]!='\0';i++){
        count[char1[i]-'a']++;
    }
    for(int j=0;char2[j]!='\0';j++){
        count[char2[j]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){return 0;}
    }
    return 1;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}