// LeetCode Solution: Spiral Matrix
// Runtime: 0 ms | Memory: 9.3 MB
// Tags: Array, Matrix, Simulation
//
// 个人解题思路：
//   - 初始思路: 模拟走步，每走到边界或已访问就转向。
//   - 问题所在: -
//   - 改进方法: 维护上下左右四个边界，每走完一条边后收缩边界，循环直至越界。
//   - 时间复杂度: O(m·n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int>result;
        int top=0;
        int left=0;
        int right=cols-1;
        int bottom=rows-1;
        while(true){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            if(++top>bottom)break;
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            if(--right<left)break;
            for(int i=right;i>=left;i--){
                result.push_back(matrix[bottom][i]);
            }
            if(--bottom<top)break;
            for(int i=bottom;i>=top;i--){
                result.push_back(matrix[i][left]);
            }
            if(++left>right)break;
        }
        return result;
    }
};
