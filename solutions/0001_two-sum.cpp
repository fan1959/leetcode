// LeetCode Solution: Two Sum
// Runtime: 4 ms | Memory: 14.6 MB
// Tags: Array, Hash Table
//
// 个人解题思路：
//   - 初始思路: 暴力枚举所有两数之和的组合，O(n²)复杂度。
//   - 问题所在: 暴力解法在数组较大时严重超时。
//   - 改进方法: 使用哈希表存储已遍历的数字及其索引，将查找 complement 的时间从 O(n) 降到 O(1)，整体 O(n)。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int len=nums.size();
        for(int i=0;i<len;i++){
            int another=target-nums[i];
            if(map.find(another)!=map.end()){
                return {i,map[another]};
                break;
            }
            map[nums[i]]=i;
        }
        return {};
    }
};
