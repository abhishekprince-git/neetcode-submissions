using vii = vector<int>;
using vis = vector<string>;

class Solution {
public:

    void solve(int n, int col,vector<vis> &ans, vis &board, vii &lr, vii &ld ,vii &ud){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0 ; row<n; row++){
            if(lr[row]== 0&&
               ld[row+col]==0&&
               ud[n-1+col-row]==0){

                board[row][col]='Q';
                lr[row] = 1;
                ld[row+col] = 1;
                ud[n-1+col-row] = 1;

                solve(n,col+1,ans,board,lr,ld,ud);

                //backtracking

                board[row][col] = '.';
                lr[row] = 0;
                ld[row+col] = 0;
                ud[n-1+col-row] = 0;
            }
        }
    }
    vector<vis> solveNQueens(int n) {

        vector<vis> ans;
        vis board(n, string(n,'.'));
        vii lr(n,0);
        vii ld(2*n-1, 0);
        vii ud(2*n-1, 0);

        solve(n,0,ans,board,lr,ld,ud);
        return ans;

        
    }
};
