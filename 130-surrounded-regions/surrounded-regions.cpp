class Solution {
public:
    int n, m;
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>>& board){
        if(row<0 || row>=n || col<0 || col>=m || board[row][col]=='X' || vis[row][col]==1){
            return;
        }

        vis[row][col]=1;

        dfs(row-1, col, vis, board);
        dfs(row+1, col, vis, board);
        dfs(row, col-1, vis, board);
        dfs(row, col+1, vis, board);
    }
    void solve(vector<vector<char>>& board) {
        n= board.size();
        m= board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int col= 0; col<m; col++){
            if(board[0][col]=='O' && vis[0][col]==0){
                dfs(0, col, vis, board);
            }
            if(board[n-1][col]=='O' && vis[n-1][col]==0){
                dfs(n-1, col, vis, board);
            }
        }

        for( int row= 0; row<n; row++){
            if(board[row][0]=='O' && vis[row][0]==0){
                dfs(row, 0, vis, board);
            }
            if(board[row][m-1]=='O' && vis[row][m-1]==0){
                dfs(row, m-1, vis, board);
            }
        }

        for(int row= 0; row<n; row++){
            for(int col= 0; col<m; col++){
                if(board[row][col]=='O' && vis[row][col]==0){
                    board[row][col]='X';
                }
            }
        }

    }
};