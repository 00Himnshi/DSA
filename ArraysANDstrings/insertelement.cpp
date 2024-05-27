#include<iostream>
using namespace std;
void in(int a[],int n){
    for (int i=1;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0 && temp<=a[j]){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
void display(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[4]={12,9,0,11};
    in(a,4);
    display(a,4);
    return 0;
}