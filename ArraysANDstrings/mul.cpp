#include<iostream>
using namespace std;
//this program multiplies two arrays
int main(){
    int a1[2][3]={{1,2,3},{4,5,6}};
    int a2[3][2]={{0,1},{1,3},{7,8}};
    int m=2;
    int n=2;
    int a3[m][n]={{0,0},{0,0}};
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            int el=0;
            for (int k=0;k<3;k++){
                el+=a1[i][k]*a2[k][j];
                a3[i][j]=el;
            }
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<a3[i][j]<<" ";
        
        }
        cout<<endl;
        }
    
}