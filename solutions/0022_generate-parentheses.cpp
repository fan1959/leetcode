// LeetCode Solution: Generate Parentheses
// Runtime: 4 ms | Memory: 15.6 MB
// Tags: String, Dynamic Programming, Backtracking
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