// LeetCode Solution: Next Permutation
// Runtime: 0 ms | Memory: 15.4 MB
// Tags: Array, Two Pointers
//
// 个人解题思路：
//   - 初始思路: 生成所有排列取下一个。
//   - 问题所在: 排列数指数级爆炸。
//   - 改进方法: 从后往前找第一个递减对 (i,i-1)，再从后找第一个大于 nums[i-1] 的数交换，末尾反转升序。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        std::next_permutation(nums.begin(),nums.end());
    }
};
