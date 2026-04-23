// LeetCode Solution: Combination Sum
// Runtime: 3 ms | Memory: 14.2 MB
// Tags: Array, Backtracking
//
// 个人解题思路：
//   - 初始思路: 暴力枚举所有组合。
//   - 问题所在: 组合可能重复或无序。
//   - 改进方法: 回溯 + 排序去重：每次从当前索引开始选数（可重复），避免重复组合。
//   - 时间复杂度: O(分支数^深度)
//   - 空间复杂度: O(target)
//
// --------------------------------------------------

class Solution {
public:
    vector<vector<int>>result;
    vector<int>path;
    void dfs(vector<int>& candidates, int target,int startindex,int sum){
        if(sum==target){
            result.push_back(path);
            return;
        }
        for(int i=startindex;i<candidates.size();i++){
            if(sum+candidates[i]>target){
                break;
            }
            path.push_back(candidates[i]);
            dfs(candidates,target,i,sum+candidates[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::sort(candidates.begin(),candidates.end());
        if(candidates[0]>target){
            return result;
        }
        dfs(candidates,target,0,0);
        return result;
    }
};
