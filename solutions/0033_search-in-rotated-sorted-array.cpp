// LeetCode Solution: Search In Rotated Sorted Array
// Runtime: 0 ms | Memory: 14.8 MB
// Tags: Array, Binary Search
//
// 个人解题思路：
//   - 初始思路: 直接遍历 O(n)，或者先复原再二分。
//   - 问题所在: 复原需要找到旋转点，两次二分可以，但有更直接的方法。
//   - 改进方法: 单次二分：比较 nums[mid] 和 target 与首元素的关系，判断哪半边有序，再决定搜索区间。
//   - 时间复杂度: O(log n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int mid=(left+right)/2;
        while(left<=right){
            if(nums[mid]==target){
                return mid;   
            }
            if(nums[left]<=nums[mid]){
                if(target>=nums[left] && target<=nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else if(nums[right]>=nums[mid]){
                if(target>=nums[mid] && target<=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            mid=(left+right)/2;
        }
        return -1;
    }
};
