//return second largest element in the array
int findSecondLargest(int arr[], int n)
{
    //Write your code here
    int l=-1,ans=-2;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            ans=l;
            l=arr[i];
        }
        else if(arr[i]>ans && arr[i]!=l){ans=arr[i];}
    }
    return ans;
}