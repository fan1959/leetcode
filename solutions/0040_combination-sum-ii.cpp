// LeetCode Solution: Combination Sum II
// Runtime: 4 ms | Memory: 13.9 MB
// Tags: Array, Backtracking
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
    vector<vector<int>>result;
    vector<int>path;
    void dfs(vector<int>& candidates,int sum,int target,int startindex){
        if(sum==target){
            result.push_back(path);
            return;
        }
        for(int i=startindex;i<candidates.size();i++){
            if( i> startindex && candidates[i]==candidates[i-1]){
                continue;
            }
            if(sum+candidates[i]>target){
                break;
            }
            sum+=candidates[i];
            path.push_back(candidates[i]);
            dfs(candidates,sum,target,i+1);
            sum-=candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::sort(candidates.begin(),candidates.end());
        if(target<candidates[0])return result;
        dfs(candidates,0,target,0);
        return result;
    }
};