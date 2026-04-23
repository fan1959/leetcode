// LeetCode Solution: Remove Element
// Runtime: 0 ms | Memory: 11.5 MB
// Tags: Array, Two Pointers
//
// 个人解题思路：
//   - 初始思路: 新建数组保存不需要移除的元素。
//   - 问题所在: 多占空间。
//   - 改进方法: 双指针原地交换，慢指针记录新数组尾部，快指针遍历发现不等于 val 时赋值给慢指针位置。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=nums.size();
        std::sort(nums.begin(),nums.end());
        if(count==0 || nums[0]>val || nums[count-1]<val){
            return count;
        }
        int left=0,right=0;
        while(right<nums.size() && nums[right]!=val){
            right++;
        }
        left=right;
        while(right<nums.size() && nums[right]==val){
            right++;
            count--;
        }
        while(right<nums.size()){
            nums[left++]=nums[right++];
        }
        return count;
    }
};
