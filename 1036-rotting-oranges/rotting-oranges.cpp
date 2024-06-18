class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int drow[4]= {-1, 1, 0, 0};
        int dcol[4]= {0, 0, 1, -1};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({{i, j}, 0});
                    vis[i][j]= 1;
                }
            }
        }

        //bfs
        int tmax= 0;
        while(!q.empty()){
            int row= q.front().first.first;
            int col= q.front().first.second;
            int time= q.front().second;

            q.pop();

            tmax= max(tmax, time);

            for(int i=0; i<4; i++){
                int nrow= row + drow[i];
                int ncol= col + dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
                grid[nrow][ncol]==1 && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.push({{nrow, ncol}, time+1});
                }
            }
        }
        for(int i= 0; i< n; i++){
            for(int j= 0; j<m; j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    return -1;
                }
            }
        }
        return tmax;
    }
};