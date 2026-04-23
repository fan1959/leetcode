// LeetCode Solution: Valid Sudoku
// Runtime: 0 ms | Memory: 22.2 MB
// Tags: Array, Hash Table, Matrix
//
// 个人解题思路：
//   - 初始思路: 遍历 9×9 格子，对每行、每列、每宫格分别检查。
//   - 问题所在: -
//   - 改进方法: 一次遍历，用三个数组记录每行、每列、每宫格已出现的数字，遍历时发现重复即为无效。
//   - 时间复杂度: O(81)
//   - 空间复杂度: O(81)
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
                int boxindex=i/3*3+j/3;
                int num=board[i][j]-'0';
                if(board[i][j]!='.'){
                    if(rows[i][num]==1 || cols[j][num]==1 ||boxes[boxindex][num]==1){
                        return false;
                        break; 
                    }
                    else{
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
