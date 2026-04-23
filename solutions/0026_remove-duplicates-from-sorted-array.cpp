// LeetCode Solution: Remove Duplicates From Sorted Array
// Runtime: 0 ms | Memory: 22.1 MB
// Tags: Array, Two Pointers
//
// 个人解题思路：
//   - 初始思路: 用集合去重后重建数组。
//   - 问题所在: 集合额外空间，且破坏了相对顺序。
//   - 改进方法: 双指针，快指针遍历发现不同元素时慢指针前移并赋值，时间 O(n)，原地修改。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int count=1;
        for(int right=1;right<nums.size();right++){
            while(right<nums.size() && nums[right]==nums[left]){
                right++;
            }
            if(right<nums.size()){
            nums[++left]=nums[right];
            count++;}
        }
        return count;
    }
};
