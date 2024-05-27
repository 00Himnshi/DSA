/*Problem statement
For a given two-dimensional integer array of size (N x M), print the array in a sine wave order, i.e, 
print the first column top to bottom, next column bottom to top and so on.*/
void wavePrint(int input[][1001], int nRows, int mCols)
{
    //even i: top to bottom 00 10 20         3*2 array
    //odd i: bottom to top  20 10 00          [r-i-1][j-c-1]
for(int i=0;i<mCols;i++){
    for(int j=0;j<nRows;j++){
        if(i%2==0){
            cout<<input[j][i]<<" ";
        }
        else{
            cout<<input[nRows-j-1][i]<<" ";
        }
    }
}
}
#include <iostream>
using namespace std;
int main()
{
	
		int row, col;
		cin >> row >> col;
		int input[row][1001];
		for (int i = 0; i < row; i++)
		{
			
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	
}