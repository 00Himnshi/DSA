/*Problem statement
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 < |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
int ans(char input[]){
     if(input[0]=='\0'){
        return 0;
    }int an=input[0]-'0';
    return  an+10*ans(input+1);
}
int stringToNumber(char input[]) {
    // Write your code here
int size=0;
for(int j=0;input[j]!='\0';j++){

*/
int ans(char input[]){
     if(input[0]=='\0'){
        return 0;
    }int an=input[0]-'0';
    return  an+10*ans(input+1);
}
int stringToNumber(char input[]) {
    // Write your code here
int size=0;
for(int j=0;input[j]!='\0';j++){
    size++;
}
int i=0,j=size-1;
while(i<j){
    int temp=input[i];
    input[i]=input[j];
    input[j]=temp;
    i++;j--;
}
return ans(input);
}

