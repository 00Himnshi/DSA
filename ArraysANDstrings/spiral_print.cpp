/*Given an m x n matrix, return all elements of the matrix in spiral order.*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> s;int r=matrix.size(),c=matrix[0].size();
       int top=0,bottom=r-1,left=0,right=c-1;int i;
       while(top<=bottom && left<=right){
        if(top<=bottom){
        for(i=left;i<=right;i++){
            s.push_back(matrix[top][i]);
        }
        top++;}
        if(left<=right){
        for(i=top;i<=bottom;i++){
            s.push_back(matrix[i][right]);
        }
        right--;}
        if(top<=bottom){
        for(i=right;i>=left;i--){
            s.push_back(matrix[bottom][i]);
        }
        bottom--;}
        if(left<=right){
        for(i=bottom;i>=top;i--){
            s.push_back(matrix[i][left]);
        }
        left++;
        }
       }
       return s;
    }
};