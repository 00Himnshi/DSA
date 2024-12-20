/*Problem statement
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
// Change in the given string itself. So no need to return or print the changed string.
int length(char input[]){
    int ans=0;
    for(int i=0;input[i]!='\0';i++){
        ans++;
    }
    return ans;
}
void pairStar(char input[]) {
    // Write your code here

*/
int length(char input[]){
    int ans=0;
    for(int i=0;input[i]!='\0';i++){
        ans++;
    }
    return ans;
}
void pairStar(char input[]) {
    // Write your code here
    if(input[0]=='\0'){return;}
    if(input[0]==input[1]){
        int len=length(input);
        for(int i=len;i>0;i--){
            input[i+1]=input[i];
        }
        input[1]='*';
        pairStar(input+2);
    }
    else{
        pairStar(input+1);
    }

}