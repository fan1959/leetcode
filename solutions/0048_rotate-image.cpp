// LeetCode Solution: Rotate Image
// Runtime: 0 ms | Memory: 10.1 MB
// Tags: Array, Math, Matrix
//
// 个人解题思路：
//   - 初始思路: 新建矩阵按旋转后的位置填入。
//   - 问题所在: 多占 O(n²) 空间。
//   - 改进方法: 原地旋转：先转置矩阵，再翻转每行；或按四个角交换对应元素。
//   - 时间复杂度: O(n²)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
