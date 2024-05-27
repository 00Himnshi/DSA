#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i];int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
int a[6]={66,7,3,22,4,9};
selection(a,6);
for (int i = 0; i < 6; i++)
{
    /* code */
    cout<<a[i]<<" ";
}

}