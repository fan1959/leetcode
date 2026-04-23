// LeetCode Solution: 3Sum Closest
// Runtime: 15 ms | Memory: 13.8 MB
// Tags: Array, Two Pointers, Sorting
//
// 个人解题思路：
//   - 初始思路: 三层枚举找最接近 target 的三元组。
//   - 问题所在: O(n³) 效率低。
//   - 改进方法: 排序后双指针，固定一个数，移动双指针逼近 target，维护最近距离。
//   - 时间复杂度: O(n²)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int closestsum=nums[0]+nums[1]+nums[2];
        int len=nums.size();
        for(int i=0;i<len-2;i++){
            int left=i+1,right=len-1;
            int currentsum=nums[i]+nums[left]+nums[right];
            while(left<right){
            if(abs(currentsum-target)<abs(closestsum-target)){
                closestsum=currentsum;
            }
                if(currentsum<target){
                left++;
                }
                else if(currentsum>target){
                    right--;
                }
                else {
                    return target;
                }
            currentsum=nums[i]+nums[left]+nums[right];
            }
        }
        return closestsum;
    }
};
