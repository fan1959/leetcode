// LeetCode Solution: Sudoku Solver
// Runtime: 103 ms | Memory: 8.6 MB
// Tags: Array, Hash Table, Backtracking, Matrix
//
// 个人解题思路：
//   - 初始思路: 暴力填数字，验证合法性。
//   - 问题所在: 搜索空间极大 9^81。
//   - 改进方法: 回溯 + 剪枝：先填可选数字最少的空格（MRV 启发式），每次填入验证，遇到冲突回溯。
//   - 时间复杂度: O(9^m)
//   - 空间复杂度: O(m)
//
// --------------------------------------------------

class Solution {
public:
    int rows[9][10]={0};
    int cols[9][10]={0};
    int boxes[9][10]={0};
    bool save(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(int num=1;num<=9;num++){
                        int boxesindex=i/3*3+j/3;
                        if(rows[i][num]!=1 && cols[j][num]!=1 && boxes[boxesindex][num]!=1 ){
                            board[i][j]=num+'0';
                            rows[i][num]+=1;
                            cols[j][num]+=1;
                            boxes[boxesindex][num]+=1;
                        
                        if(save(board)){
                            return true;
                        }
                        board[i][j]='.';
                        rows[i][num]-=1;
                        cols[j][num]-=1;
                        boxes[boxesindex][num]-=1;
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
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'0';
                    int boxesindex=i/3*3+j/3;
                    rows[i][num]++;
                    cols[j][num]++;
                    boxes[boxesindex][num]++;
                }
            }
        }
        save(board);
    }
};
