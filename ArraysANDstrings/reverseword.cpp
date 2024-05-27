#include <iostream>
#include <cstring>
using namespace std;

/*Problem statement
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to change the sentence such that each word in the sentence is reversed. A word is a combination of characters without any spaces.

Example:
Input Sentence: "Hello I am Aadil"
The expected output will look, "olleH I ma lidaA".*/


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
void reverseEachWord(char input[]) {
    // Write your code here
    int i=0;
   while(input[i]!='\0') {
        int j = i;
        while (input[i] != '\0' && input[i] != ' ') {
            i++;
        }
        int k = i-1;
        while (j < k) {
            swap(input[k], input[j]);
            j++;
            k--;
        }
        if (input[i] == ' ') {
            i++;
        }
    }
}
// void reverseEachWord(char input[]) {
//     int i = 0;
//     while (input[i] != '\0') {
//         // Find the start and end of the current word
//         int start = i;
//         while (input[i] != ' ' && input[i] != '\0') {
//             i++;
//         }
//         int end = i - 1;

//         // Reverse the current word
//         while (start < end) {
//             char temp = input[start];
//             input[start] = input[end];
//             input[end] = temp;
//             start++;
//             end--;
//         }

//         // Move to the next word
//         if (input[i] == ' ') {
//             i++;
//         }
//     }
// }
