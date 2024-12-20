/*Problem statement
Given a string S, remove consecutive duplicates from it recursively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
void removeConsecutiveDuplicates(char *input) {

if(input[0]=='\0'){
	return;
}
if(input[0]!=input[1]){	removeConsecutiveDuplicates(input+1);
}
else{
	int i;
	for(i=1;input[i]!='\0';i++){
		input[i-1]=input[i];
	}
	input[i-1]='\0';
	removeConsecutiveDuplicates(input);
}


}
