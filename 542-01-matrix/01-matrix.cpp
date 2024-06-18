class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        vector<vector<int>> ans(n, vector<int>(m, 0));

        queue<pair<pair<int, int>, int>> q;

        //instead of finding dist from 1 to 0, we find from 0 to 1
        for(int i= 0; i<n; i++){
            for(int j= 0; j<m; j++){
                if(mat[i][j]==0){
                    q.push({{i, j}, 0});
                    vis[i][j]= 1;
                }
            }
        }
        int drow[4]= {1, -1, 0, 0};
        int dcol[4]= {0, 0, 1, -1};
        //bfs
        while(!q.empty()){
            int row= q.front().first.first;
            int col= q.front().first.second;
            int dist= q.front().second;
            ans[row][col]= dist;
            q.pop();

            for(int i=0; i<4; i++){
                int nrow= row + drow[i];
                int ncol= col + dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
                mat[nrow][ncol]==1 && vis[nrow][ncol]==0){
                    vis[nrow][ncol]= 1;
                    q.push({{nrow, ncol}, dist+1});
                }
            }
        }
        return ans;
    }
};