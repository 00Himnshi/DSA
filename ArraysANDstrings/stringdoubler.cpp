#include<iostream>
using namespace std;
/*
Given a string, return a string where for every char
 in the original, there are two chars.


double_char('The') → 'TThhee'
double_char('AAbb') → 'AAAAbbbb'
double_char('Hi-There') → 'HHii--TThheerree'*/
int main(){
    string in,out;
    cin>>in;
    for (int i=0;i<in.size();i++){
        out+=in[i];
        out+=in[i];
    }
    cout<<out;
}