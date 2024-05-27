#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int m=1;
        while (m<=(n-row+1))
        {
            cout<<m;
            m=m+1;
        }
        int star=row-1;
        while (star>0)
        {
            cout<<"*";
            cout<<"*";
            star=star-1;
        }
        int max=n-row+1;
        while (max>0)
        {
            cout<<max;
            max=max-1;
        }
        cout<<endl;
        row=row+1;
    }
}
//PATTERN2
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int space=n-row;
//         while (space>0)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         int num=1;
//         while (num<=row)
//         {
//             cout<<num;
//             num=num+1;
//         }
//         int i=row-1;;
//         while (i>0)
//         {
//             cout<<i;
//             i=i-1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN3
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int space=row-1;
//         while (space>=0)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         int num=row;
//         while (num<=4)
//         {
//             cout<<num;
//             num=num+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN4
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
        // int space=n-row-1;
        // while (space>=0)
        // {
        //     cout<<" ";
        //     space=space-1;
        // }
//         int num=row;
//         while (num>0)
//         {
//             cout<<row;
//             num=num-1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERNS5
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int sta=0;
//         int space=(row-1);
//         while (space>=0)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         while (sta<=(n-row))
//         {
//             cout<<row;
//             sta=sta+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// PATTERN6
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int sta=0;
//         int space=(row-1);
//         while (space>=0)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         while (sta<=(n-row))
//         {
//             cout<<"*";
//             sta=sta+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// PATTERN7
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int j=1;
//         int star=n-row+1;
//         while (star)
//             {
//                 cout<<"*";
//                 star=star-1;
//             }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN8
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int spaces=n-row;
//         while (spaces)
//         {
//             cout<<" ";
//             spaces=spaces-1;
//         }
//         int col=1;
//         while (col<=row)
//         {
//             cout<<"*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN9
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
        
//         int col=1;
//         while (col<=n)
//         {
//             cout<<' ';
//             while 
            
//             col=col+1;
//         }
//         row=row+1;
//     }
// }
//PATTERN10
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             int v=3-row+col;
//             char ch='A'+v;
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }    
// }
//PATTERN11
// {
//     int n;
//     cin>>n;
//     int row=1;
    
//     while (row<=n)
//     {
//         int col=1;
//         int v=row-1;
//         while (col<=row)
//         {
//             char c='A'+v;
//             cout<<c;
//             v=v+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN12
// {
//     int n;
//     cin>>n;
//     int row=1;
//     int count=0;
//     while (row<=n)
//     {
//         int j=1;
//         while (j<=row)
//         {
//             char ch='A'+count;
//             cout<<ch;
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN13
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             char ch='A'+row -1;
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN14
// {
//     int n;
//     cin >> n;
//     int row = 1;
 
//     while (row <= n)
//     {
//         int col=1;
//         int count=row-1;
//         while (col<=n)
//         {
            
//             // cout<<char(row+64);
//             char c = 'A' + count;
//             count=count+1;
//             cout<<c;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN15
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     int count=0;
//     while (row <= n)
//     {
//         int col=1;
//         while (col<=n)
//         {
//             // cout<<char(row+64);
//             char c = 'A' + count;
//             count=count+1;
//             cout<<c;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN16
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             cout<<(row-col+1);
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     } 
// }

//PATTERN17

// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             cout<<(row+col-1);
//             col=col+1;
//         }
//         row=row+1;
//         cout<<endl;
//     }
// }
//PATTERN18
// {
//     int n;
//     cin>>n;
//     i=1;
//     while (i<=n)
//     {
//         intj=1;
//         while (j<=i)
//         {
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }
//PATTERN19
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             cout<<"*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//PATTERN20
// {
//     int n;
//     cout<<"enter number of rows";
//     cin>>n;
//     //columns are always 3
//     int j=1;
//     int sq;
//     sq=n*n;
//     while (j<=sq)
//     {
//         int i=1;
//         while (i<=n)
//         {
//             cout<<j;
//             j=j+1;
//             i=i+1;
//         }
//         cout<<endl;
//     }
// }
//PATTERN21
// {
//     int i=1;
//     int n=4;
//     while (i<=4)
//     {
//         int j=1;
//         while (j<=4)
//         {
//             cout<<n+1-j;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
//PATTERN22
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while ( j<=3)
//         {
//             cout<<i;

//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }

    // int i=1;
    // method 1
    // while (i<4)
    // {
    //     cout<<"****"<<endl;
    //     i=i+1;
    // }
    // real method
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }