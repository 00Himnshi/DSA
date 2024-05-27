void merge(int a[],int s,int e){
int m=(s+e)/2;
int k=0;
int p=m+1;
int i=s;
int *temp=new int[e-s+1];
while(i<=m && p<=e){
    if(a[i]<a[p]){
        temp[k++]=a[i++];
    }
    else if(a[i]>a[p]){
        temp[k++]=a[p++];
    }
    else{
        temp[k++]=a[i++];
    }
}
while(i<=m){
            temp[k++]=a[i++];

}
while(p<=e){
            temp[k++]=a[p++];
}
for(int l=0;l<k;l++){
    a[s+l]=temp[l];
}
delete [] temp;
}
void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if(l>=r){
        return ;
    }
int mid = l + (r - l) / 2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,r);
}