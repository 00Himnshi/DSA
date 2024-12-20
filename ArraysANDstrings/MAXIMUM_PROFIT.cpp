/*Problem statement
You have made a smartphone app and want to set its subscription price such that the profit earned is maximised. There are certain users who will subscribe to your app only if their budget is greater than or equal to your price.

You will be provided with a list of size N having budgets of subscribers and you need to return the maximum profit that you can earn.

Lets say you decide that price of your app is Rs. x and there are N number of subscribers. So maximum profit you can earn is :

 m * x
where m is total number of subscribers whose budget is greater than or equal to x.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^6

1 <=budget[i]<=9999

Sample Input 1 :
4
30 20 53 14
Sample Output 1 :
60
Sample Output 1 Explanation :
Price of your app should be Rs. 20 or Rs. 30. For both prices, you can get the profit Rs. 60.
Sample Input 2 :
5
34 78 90 15 67
Sample Output 2 :
201
Sample Output 2 Explanation :
Price of your app should be Rs. 67. You can get the profit Rs. 201 (i.e. 3 * 67).
#include <algorithm>
int maximumProfit(int budget[], int n) {
    // Write your code here
    int max=0;
    sort(budget,budget+n);
    for(int i=0;i<n;i++){
        int cur=budget[i]*(n-i);
        if(cur>=max){max=cur;}
    }
    return max;

*/
#include <iostream>
using namespace std;
#include <algorithm>
int maximumProfit(int budget[], int n) {
    // Write your code here
    int max=0;
    sort(budget,budget+n);
    for(int i=0;i<n;i++){
        int cur=budget[i]*(n-i);
        if(cur>=max){max=cur;}
    }
    return max;
}

int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
