// LeetCode Solution: Permutations Ii
// Runtime: 0 ms | Memory: 11 MB
// Tags: Array, Backtracking, Sorting
//
// 个人解题思路：
//   - 初始思路: 先生成所有排列再去重。
//   - 问题所在: 去重开销大。
//   - 改进方法: 排序后回溯 + 跳过同层相同值：同一位置不能重复选相同的数。
//   - 时间复杂度: O(n!)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
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
