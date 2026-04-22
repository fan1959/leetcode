// LeetCode Solution: Valid Sudoku
// Runtime: 4 ms | Memory: 22.2 MB
// Tags: Array, Hash Table, Matrix
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
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][10]={0};
        int cols[9][10]={0};
        int boxes[9][10]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'0';
                    int boxindex=(i/3)*3+j/3;
                    if(rows[i][num]==1 || cols[j][num]==1 || boxes[boxindex][num]==1){
                        return false;
                    }
                    else
                    {
                        rows[i][num]++;
                        cols[j][num]++;
                        boxes[boxindex][num]++;
                    }
                }
            }
        }
        return true;
    }
};