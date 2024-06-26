class Solution {
public:
    int N;
    vector<vector<string>> ans;
    bool check(int row, int col, vector<string>& board){  
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

    void recur(int row, vector<string>& board){
        if(row>=N){
            ans.push_back(board);
            return;
        }
        for(int col= 0; col<N; col++){
            if(check(row, col, board)){
                board[row][col]= 'Q';
                recur(row+1, board);
                board[row][col]= '.'; //backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        N= n;
        vector<string> board(n, string(n, '.'));
        recur(0, board);
        return ans;
    }
};