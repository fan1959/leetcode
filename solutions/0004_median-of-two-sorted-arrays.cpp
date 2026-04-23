// LeetCode Solution: Median Of Two Sorted Arrays
// Runtime: 7 ms | Memory: 93.6 MB
// Tags: Array, Binary Search, Divide and Conquer
//
// 个人解题思路：
//   - 初始思路: 合并两个有序数组后直接取中位数。
//   - 问题所在: 合并需要 O(m+n) 额外空间，不够优雅。
//   - 改进方法: 二分搜索切分点，通过比较左右分割边界排除不可能的区间，复杂度 O(log(m+n))。
//   - 时间复杂度: O(log(m+n))
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        std::sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==1)
        {
            return nums1[nums1.size()/2];
        }
        else{
            return ((double)nums1[nums1.size()/2]+nums1[nums1.size()/2-1])/2;
        }
    }
};
