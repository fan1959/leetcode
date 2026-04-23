// LeetCode Solution: Search Insert Position
// Runtime: 0 ms | Memory: 13.4 MB
// Tags: Array, Binary Search
//
// 个人解题思路：
//   - 初始思路: 遍历找插入位置。
//   - 问题所在: O(n)。
//   - 改进方法: 二分查找，找 target 或第一个大于 target 的位置。
//   - 时间复杂度: O(log n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(),nums.end(),target);
        return it-nums.begin();
    }
};
