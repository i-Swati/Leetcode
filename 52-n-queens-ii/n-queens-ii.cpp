class Solution {
public:
    int ans= 0;
    bool check(int N, int row, int col, vector<string>& board){  
        for(int i=row-1;i>=0;i--)
        {
            if(board[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
        {
            if(board[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<N;i--,j++)
        {
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void recur(int n, int row, vector<string>& board){
        if(row>=n){
            ans++;
            return;
        }

        for(int col= 0; col<n; col++){
            if(check(n, row, col, board)){
                board[row][col]= 'Q';
                recur(n, row+1, board);
                board[row][col]= '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        recur(n, 0, board);
        return ans;
    }
};