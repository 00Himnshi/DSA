/*Problem statement
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in ascending order.


Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^4
0 <= M <= 10^4

Time Limit: 1 sec 
Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 3 4
10
Sample Input 2 :
1
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
1 2 2
Explanation for Sample Output 2 :
Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. 
The first '2' of first array matches with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.
    }
  }
}
*/
*/
void merge(int arr[], int s, int e) {
  int mid = (s + e) / 2;
  int i = s, j = mid + 1;
  int *temp = new int[e - s + 1];
  int k = 0;
  while (i <= mid && j <= e) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
    }
  }
  while (i <= mid) {
    temp[k++] = arr[i++];
  }
  while (j <= e) {
    temp[k++] = arr[j++];
  }
  for (int m = 0; m < k; m++) {
    arr[s + m] = temp[m];
  }
  delete[] temp;
}
void sort(int arr[], int s, int e) {
  if (s >= e) {
    return;
  }
  int mid = (s + e) / 2;
  sort(arr, s, mid);
  sort(arr, mid + 1, e);
  merge(arr, s, e);
}

// 1
/*
void intersection(int *arr1, int *arr2, int n, int m)
{
    //Write your code here
  sort(arr1,0,n-1);
  sort(arr2,0,m-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-arr2[j];
i++;
            }
        }
    }
}

*/
//2
void intersection(int *arr1, int *arr2, int n, int m)
{
    //Write your code here
    sort(arr1,0,n-1);
  sort(arr2,0,m-1);
  int i=0,j=0;
  while(i<n && j<m){
      if(arr1[i]>arr2[j]){
          j++;
      }
      else if(arr2[j]>arr1[i]){
          i++;
      }
      else{
          cout<<arr1[i]<<" ";
          i++;j++;
      }

  }
}

/*
bool bin(int arr[], int n, int m) {
  int s = 0, e = n - 1;
 
  int mid=(s + e) / 2;
  while (s <= e) {
    mid = (s + e) / 2;
    if (arr[mid] == m) {
      arr[mid]=-arr[mid];
      return 1;
    } else if (arr[mid] > m) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }
  return 0;
}

// 3
void intersection(int *arr1, int *arr2, int n, int m) {
  // Write your code here

  if (n < m) {
    sort(arr1, 0, n-1);
    for (int i = 0; i < m; i++) {
      if (bin(arr1, n, arr2[i])) {
        cout << arr2[i] << " ";
      }
    }
  } else {
    sort(arr2, 0, m-1);
    for (int i = 0; i < n; i++) {
      if (bin(arr2, m, arr1[i])) {
        cout << arr1[i] << " ";
      }
    }
  }
}
*/