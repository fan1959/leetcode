// LeetCode Solution: Find First And Last Position Of Element In Sorted Array
// Runtime: 0 ms | Memory: 17.1 MB
// Tags: Array, Binary Search
//
// 个人解题思路：
//   - 初始思路: 遍历找左右边界。
//   - 问题所在: O(n)。
//   - 改进方法: 两次二分：分别找 target 首次出现位置和末次出现位置（通过找 target+1 的首次位置减1）。
//   - 时间复杂度: O(log n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto left=lower_bound(nums.begin(),nums.end(),target);
        auto right=upper_bound(nums.begin(),nums.end(),target);
        if(left==nums.end() || *left!=target){
            return {-1,-1};
        }
        int leftcount=distance(nums.begin(),left);
        int rightcount=distance(nums.begin(),right-1);
        return {leftcount,rightcount};
    }
};
