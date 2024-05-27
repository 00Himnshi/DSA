/*Problem statement
For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
*/
void printSubstrings(char input[]) {
  // Write your code here
  for (int i = 0; input[i] != '\0'; i++) {
    char cur[strlen(input)];
    int index = 0;
    for (int j = i; input[j] != '\0'; j++) {
      cur[index++] = input[j];
      int in = index;
      cur[in] = '\0';
      // for(int k=0;cur[k]!='\0';k++){
      //     cout<<cur[k];
      // }
      cout << cur << endl;
    }
  }
}
// other solution:
void printSubstrings(char input[]) {
  int k = 1;
  while (k <= strlen(input)) {
    for (int i = 0; i <= strlen(input) - k; i++) {
      for (int j = i; j < i + k; j++) {
        cout << input[j];
      }
      cout << endl;
    }
    k++;
  }
}