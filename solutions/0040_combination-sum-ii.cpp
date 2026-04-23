// LeetCode Solution: Combination Sum Ii
// Runtime: 4 ms | Memory: 14.1 MB
// Tags: Array, Backtracking
//
// 个人解题思路：
//   - 初始思路: 先选数再回溯，可能产生重复组合。
//   - 问题所在: 重复组合过多。
//   - 改进方法: 排序后回溯，同层跳过重复值，每个数只用一次。
//   - 时间复杂度: O(2^n)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    vector<vector<int>>result;
    vector<int>path;
    void dfs(vector<int>& candidates, int& target,int sum,int startindex){
        if(sum==target){
            result.push_back(path);
            return;
        }
        for(int i=startindex;i<candidates.size();i++){
            while(i<candidates.size() && i>startindex && candidates[i]==candidates[i-1]){
                i++;
            }
            if(i==candidates.size() || sum+candidates[i]>target){
                break;
            }
            path.push_back(candidates[i]);
            dfs(candidates,target,sum+candidates[i],i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::sort(candidates.begin(),candidates.end());
        if(target<candidates[0]){
            return result;
        }
        dfs(candidates,target,0,0);
        return result;
    }
};
