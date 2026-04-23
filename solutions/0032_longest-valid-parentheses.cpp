// LeetCode Solution: Longest Valid Parentheses
// Runtime: 3 ms | Memory: 11.7 MB
// Tags: Stack, String, Dynamic Programming
//
// 个人解题思路：
//   - 初始思路: 枚举所有子串判断是否合法括号。
//   - 问题所在: O(n²) 或 O(n³) 必定超时。
//   - 改进方法: 栈或 DP：栈做法是左括号索引入栈，遇到右括号弹出，计算当前有效长度；DP 是找 '()' 和 '(...)' 模式递推。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    int longestValidParentheses(string s) {
        int maxans = 0, n = s.length();
        vector<int> dp(n, 0);
        for (int i = 1; i < n; i++) {
            if (s[i] == ')') {
                if (s[i - 1] == '(') {
                    dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
                } else if (i - dp[i - 1] > 0 && s[i - dp[i - 1] - 1] == '(') {
                    dp[i] = dp[i - 1] + ((i - dp[i - 1]) >= 2 ? dp[i - dp[i - 1] - 2] : 0) + 2;
                }
                maxans = max(maxans, dp[i]);
            }
        }
        return maxans;
    }
};

