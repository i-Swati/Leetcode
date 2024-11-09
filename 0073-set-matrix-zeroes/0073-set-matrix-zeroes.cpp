class Solution {
public:
    
    void check(vector<vector<int>>& matrix, int m, int n, int i, int j){
        //row
        for(int row= 0; row<m; row++){
            matrix[row][j]=0;
        }
        //col
        for(int col= 0; col<n; col++){
            matrix[i][col]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m= matrix.size();//no. of rows
        int n= matrix[0].size(); //no. of cols

        vector<vector<int>> arr= matrix; //temp matrix---> create a copy of matrix

        
        for(int i= 0; i<m; i++){
            for(int j= 0; j<n; j++){
                if(arr[i][j]==0)    check(matrix, m, n, i, j);
            }
        }
    }
};