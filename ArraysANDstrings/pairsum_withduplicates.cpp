
/*Problem statement
You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.

Note:
Given array/list can contain duplicate elements. 
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^4
0 <= num <= 10^9

Time Limit: 1 sec
Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7
Sample Input 2:
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Sample Output 2:
0
2


 Explanation for Input 2:
Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.

For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).
      }
    }
  }

  return ans;
}


*/
void merge(int arr[], int s, int e) {
  int mid = (s + e) / 2;
  int i = s, j = mid + 1;
  int *temp = new int[e - s + 1];
  int k = 0;
  while (i <= mid && j <= e) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else
     { temp[k++] = arr[j++]; }
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

int pairSum(int *arr, int n, int num) {
  // Write your code here
  int i = 0;
  int j = n - 1;
  int ans = 0;
  sort(arr, 0, n - 1);
  while (i < j) {
    if (arr[i] + arr[j] < num) {
      i++;
    } else if (arr[i] + arr[j] > num) {
      j--;
    } else {
      // If arr[i] and arr[j] are different
      if (arr[i] != arr[j]) {
        int count_i = 1;
        int count_j = 1;

        // Count occurrences of arr[i]
        while (i + 1 < j && arr[i] == arr[i + 1]) {
          count_i++;
          i++;
        }

        // Count occurrences of arr[j]
        while (j - 1 > i && arr[j] == arr[j - 1]) {
          count_j++;
          j--;
        }

        ans += count_i * count_j;
        i++;
        j--;
      } else {
        // If arr[i] and arr[j] are the same
        int count = j - i + 1;
        ans += (count * (count - 1)) / 2;
        // break;
        return ans;
      }
    }
  }

  return ans;
}
