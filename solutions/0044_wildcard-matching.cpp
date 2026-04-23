// LeetCode Solution: Wildcard Matching
// Runtime: 78 ms | Memory: 15.4 MB
// Tags: Greedy, Recursion, String, Dynamic Programming
//
// 个人解题思路：
//   - 初始思路: 递归回溯处理 '*'。
//   - 问题所在: 最坏情况指数级。
//   - 改进方法: 动态规划：dp[i][j] = dp[i-1][j-1] (匹配) 或 dp[i][j-1] (消除 '*' 匹配空) 或 dp[i-1][j] (消除 '*' 匹配任意)。
//   - 时间复杂度: O(mn)
//   - 空间复杂度: O(mn)
//
// --------------------------------------------------

class Solution {
public:
    bool isMatch(string s, string p) {
        int slen=s.size(),plen=p.size();
        vector<vector<bool>> dp(slen+1,vector<bool>(plen+1,false));
        dp[0][0]=true;
        int index=0;
        while(index<plen && p[index]=='*'){
            dp[0][index+1]=true;
            index++;
        }
        for(int i=1;i<slen+1;i++){
            for(int j=1;j<plen+1;j++){
                if(p[j-1]==s[i-1] || p[j-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(p[j-1]=='*'){
                    dp[i][j]=dp[i][j-1]|dp[i-1][j];
                }
            }
        }
        return dp[slen][plen];
    }
};
