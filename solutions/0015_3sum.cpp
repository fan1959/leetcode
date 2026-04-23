// LeetCode Solution: 3Sum
// Runtime: 83 ms | Memory: 28.3 MB
// Tags: Array, Two Pointers, Sorting
//
// 个人解题思路：
//   - 初始思路: 三层枚举所有三元组。
//   - 问题所在: O(n³) 必定超时，且有重复结果需要去重。
//   - 改进方法: 排序后双指针：固定一个数，双指针找另外两个数，排序后自然去重。
//   - 时间复杂度: O(n²)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        if(nums[nums.size()-1]<0)return result;
        for(int i=0;i<nums.size()-2;i++){
            while(i<nums.size()-2 && i>0 && nums[i]==nums[i-1]){
                i++;
            }
            int left=i+1,right=nums.size()-1;
            int sum=nums[i]+nums[left]+nums[right];
            while(left<right){
            if(sum==0){
                result.push_back({nums[i],nums[left],nums[right]});
                while(left+1<right && nums[left]==nums[left+1]){
                    left++;
                }
                left++;
                while(right-1>left && nums[right]==nums[right-1]){
                    right--;
                }
                right--;
            }
            else if(sum<0){
                while(left+1<right && nums[left]==nums[left+1]){
                    left++;
                }
                left++;
            }
            else{
                while(right-1>left && nums[right]==nums[right-1]){
                    right--;
                }
                right--;
            }
            sum=nums[i]+nums[left]+nums[right];
            }
        }
        return result;
    }
};
