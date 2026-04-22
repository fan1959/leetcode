// LeetCode Solution: Sudoku Solver
// Runtime: 124 ms | Memory: 8.7 MB
// Tags: Array, Hash Table, Backtracking, Matrix
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
//
// --------------------------------------------------

class Solution {
public:
    bool rows[9][10];
    bool cols[9][10];
    bool boxes[9][10];
    bool saveboard(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    int boardindex=i/3*3+j/3;
                    for(int num=1;num<=9;num++){
                        if(!rows[i][num] && !cols[j][num] && !boxes[boardindex][num]){
                            board[i][j]=num+'0';
                            rows[i][num]=cols[j][num]=boxes[boardindex][num]=true;
                            if(saveboard(board)){
                                return true;
                            }
                            board[i][j]='.';
                            rows[i][num]=cols[j][num]=boxes[boardindex][num]=false;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<10;j++){
                rows[i][j]=cols[i][j]=boxes[i][j]=false;
            }
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int boxesindex=i/3*3+j/3;
                    int num=board[i][j]-'0';
                    rows[i][num]=cols[j][num]=boxes[boxesindex][num]=true;
                }
            }
        }
        saveboard(board);
    }
};