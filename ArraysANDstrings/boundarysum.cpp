#include <iostream>
using namespace std;

/*Problem statement
For a given two-dimensional square matrix of size (N x N).
 Find the total sum of elements on both the diagonals and at all the four boundaries.*/
 int totalSum(int input[][501], int n)
{
    //Write your code here
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(i==0 || j==0 || j==n-1 || i+j==n-1|| i==n-1 || i==j){
                s+=input[i][j];
                // cout<<s<<endl;
            }
        }
    }

return s;
}
int main()
{
	
		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 
	
}