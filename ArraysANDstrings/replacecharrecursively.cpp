/*Problem statement
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.

Do this recursively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= Length of String S <= 10^6

Sample Input :
abacd
a x
Sample Output :
xbxcd*/
void replaceCharacter(char input[], char c1, char c2) {
   
    if(input[0]=='\0'){
        return;
    }
    if(input[0]==c1){
        input[0]=c2;
        replaceCharacter(input+1, c1,  c2);
    }
    else{
        replaceCharacter(input+1,  c1,  c2);
    }
}