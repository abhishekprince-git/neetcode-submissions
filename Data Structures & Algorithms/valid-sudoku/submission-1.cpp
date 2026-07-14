class Solution {
public:

bool issafe(char num , vector<vector<char>>& board, int row, int col){
    //check row
    for(int j = 0; j<9; j++){
        if(j != col && board[row][j] == num){
            return false;
        }
    }
    //check col
    for(int i = 0; i<9 ; i++){
        if(i != row && board[i][col] == num){
            return false;
        }
    }
    //3*3 board

    int startrow = (row/3)*3;
    int startcol = (col/3)*3;

    for(int i = startrow; i < startrow+3 ; i++){
        for( int j = startcol; j<startcol+3; j++){
            if((i != row || j != col) && board[i][j] == num){
                return false;
            }
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0; row<9; row++){
            for(int col = 0; col<9; col++){
                if(board[row][col] != '.'){
                    char num = board[row][col];
                    if(!issafe(num , board , row , col)){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};