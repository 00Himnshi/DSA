/*Problem statement
Given a string, determine if it is a palindrome, considering only alphanumeric characters.

Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.*/
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}

bool checkPalindrome(char str[]) {
    // Write your code here
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    i--;
    int k=0;
    while(k<=i){
        if(str[i]!=str[k]){return 0;}
        else{i--;k++;}
    }
    return 1;
}