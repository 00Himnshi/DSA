#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i=1;i<n;i++){
        int num=arr[i];
        int j=i-1;
        while(j>=0 && num<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=num;
    }
    
}