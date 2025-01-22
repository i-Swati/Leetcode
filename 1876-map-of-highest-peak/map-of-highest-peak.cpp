class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {              

        int m= isWater.size(); //row
        int n= isWater[0].size(); //col

        vector<vector<int>> vis(m, vector<int>(n, 0)); // Visited matrix
        vector<vector<int>> ans(m, vector<int>(n, -1)); // Result matrix

        using p = pair<int, int>; 

        queue<p> q;

        
        for(int row= 0; row<m; row++){
            for(int col= 0; col<n; col++){

                if(isWater[row][col]==1){ //water
                q.push(make_pair(row, col));
                vis[row][col]= 1;
                ans[row][col]= 0;
                }


            }
        }
        int cnt= 1;

        while(!q.empty()){
            int size= q.size();

            for(int i= 0; i<size; i++){
                p curr = q.front(); //to store the popped elements in pair 'curr' from 'q'.
                q.pop();

                int r= curr.first;
                int c= curr.second;
                
                if((r-1>=0) && (vis[r-1][c]==0)){
                    ans[r-1][c]= cnt;
                    vis[r-1][c]= 1;
                    q.push(make_pair(r-1, c));
                }

                if((c-1>=0) && (vis[r][c-1]==0)){
                    ans[r][c-1]= cnt;
                    vis[r][c-1]= 1;
                    q.push(make_pair(r, c-1));
                }

                if((r+1<m) && (vis[r+1][c]==0)){
                    ans[r+1][c]= cnt;
                    vis[r+1][c]= 1;
                    q.push(make_pair(r+1, c));
                }

                if((c+1<n) && (vis[r][c+1]==0)){
                    ans[r][c+1]= cnt;
                    vis[r][c+1]= 1;
                    q.push(make_pair(r, c+1));
                }

            }
            cnt++;
        }
        return ans;
        }
};