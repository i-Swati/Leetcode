class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m= grid.size(); //no. of rows
        int n= grid[0].size(); //no. of cols

        int count= 0;

        for(int i= 0; i<m; i++){
            for(int j= 0; j<n; j++){
                if(grid[i][j]==1){ //server found
                bool comm= false;
                //check for row
                for(int col= 0; col<n; col++){
                    if((grid[i][col]==1) && (col!=j)){
                        comm= true;
                        break;
                    }
                }
                if(!comm){
                //check for col
                for(int row= 0; row<m; row++){
                    if((grid[row][j]==1) && (row!=i)){
                        comm= true;
                        break;
                        }
                    }
                }
                    if(comm==true){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};