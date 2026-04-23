// LeetCode Solution: Permutations
// Runtime: 0 ms | Memory: 10.4 MB
// Tags: Array, Backtracking
//
// 个人解题思路：
//   - 初始思路: 用 next_permutation 依次生成所有排列。
//   - 问题所在: -
//   - 改进方法: 回溯 + 标记：递归选择未使用的数，递归回溯，已访问标记需回退。
//   - 时间复杂度: O(n!)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        std::sort(nums.begin(),nums.end());
        vector<int>temp(nums);
        result.push_back(nums);
        std::next_permutation(nums.begin(),nums.end());
        while(temp!=nums){
             result.push_back(nums);
            std::next_permutation(nums.begin(),nums.end());
        }
        return result;
    }
};
