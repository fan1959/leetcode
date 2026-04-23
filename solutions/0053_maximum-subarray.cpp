// LeetCode Solution: Maximum Subarray
// Runtime: 0 ms | Memory: 70.2 MB
// Tags: Array, Divide and Conquer, Dynamic Programming
//
// 个人解题思路：
//   - 初始思路: 暴力枚举所有子数组求和。
//   - 问题所在: O(n³) 必定超时。
//   - 改进方法: Kadane 算法：当前和为负则丢弃重新开始，否则累加，同时记录最大和。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int currentsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currentsum=max(nums[i],nums[i]+currentsum);
            maxsum=max(currentsum,maxsum);
        }
        return maxsum;
    }
};
