// LeetCode Solution: Unique Binary Search Trees
// Runtime: 0 ms | Memory: 8.1 MB
// Tags: Tree, Binary Search Tree, Math, Dynamic Programming, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 枚举每个节点作根，分别计算左右子树种类数相乘。
//   - 问题所在: 卡特兰数公式需要理解推导。
//   - 改进方法: 动态规划：G[n] = Σ G[i-1] * G[n-i]，即以 i 为根时左树种类乘右树种类。
//   - 时间复杂度: O(n²)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+1,0);
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]+=dp[j-1]*dp[i-j];
            }
        }
        return dp[n];
    }
};
