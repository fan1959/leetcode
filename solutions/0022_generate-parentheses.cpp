// LeetCode Solution: Generate Parentheses
// Runtime: 4 ms | Memory: 15.6 MB
// Tags: String, Dynamic Programming, Backtracking
//
// 个人解题思路：
//   - 初始思路: 枚举所有 2^n 种括号组合，再验证合法性。
//   - 问题所在: 有一半组合不合法，浪费。
//   - 改进方法: 回溯，只在左括号数 < n 时加 '('，在右括号数 < 左括号数时加 ')'。
//   - 时间复杂度: 卡特兰数 O(C_n)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    vector<string>result;
    void dfs(string current,int leftcount,int rightcount,int n){
            if(current.size()==n*2){
                result.push_back(current);
                return ;
            }
            if(leftcount<n){
                dfs(current+'(',leftcount+1,rightcount,n);
            }
            if(rightcount<leftcount){
                dfs(current+')',leftcount,rightcount+1,n);
            }
    }
    vector<string> generateParenthesis(int n) {
        dfs("",0,0,n);
        return result;
    }
};
