/*Problem statement
You have been given two strings 'STR1' and 'STR2'. You have to check whether the two strings are anagram to each other or not.

Note:
Two strings are said to be anagram if they contain the same characters, irrespective of the order of the characters.
Example :
If 'STR1' = “listen” and 'STR2' = “silent” then the output will be 1.

Both the strings contain the same set of characters.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 100
1 <= |STR1|, |STR2| <= 10^3

Where |STR1| and |STR2| are the lengths of the string 'STR1' and 'STR2' respectively.

Time limit: 1 sec
Sample Input 1:
2
listen silent
east eats
Sample Output 1:
1
1
Explanation for Sample Output 1:
In test case 1, "listen" and "silent" has same set of characters.

In test case 2, "east" and "eats" has same set of characters.*/
#include <iostream>
using namespace std; 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    int arr[26]={0};
    for(char c:str1){
        arr[c-'a']++;
    }
    for(char ch:str2){
        arr[ch-'a']--;
    }
    for(int a:arr){
        if(a!=0){
            return 0;
        }
    }
    return 1;
}