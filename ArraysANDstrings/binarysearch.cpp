#include<iostream>
using namespace std;
int bin(int arr[],int n,int val){
    int start=0;
    int end=n-1;
    while (start<=end){
        int mid=(start+end)/2;
        if (val==arr[mid]){
            return mid;
        }
        else{
            if (val>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[6]={1,2,4,6,8,9};
    int ans;
    ans=bin(arr,6,2);
    cout<<ans;
    return 0;
}