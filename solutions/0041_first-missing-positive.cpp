// LeetCode Solution: First Missing Positive
// Runtime: 3 ms | Memory: 53.7 MB
// Tags: Array, Hash Table
//
// 个人解题思路：
//   - 初始思路: 把数组排序后遍历找最小缺失正数。
//   - 问题所在: 排序 O(n log n)，且会改变数组相对顺序。
//   - 改进方法: 原地哈希：将数字 i 放到下标 i-1 的位置（仅处理 1~n 范围内的数），最后遍历第一个位置不对应的就是答案。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // 1. 原地置换：让数字 x 尽量去到下标 x-1 的地方
        for (int i = 0; i < n; i++) {
            // 用 while 确保交换回来的数也能被处理
            // nums[i] 在 [1, n] 范围内，且它目标位置上的数不是它自己
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // 2. 遍历查找第一个不匹配的位置
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        // 3. 如果都对上了，答案就是 n + 1
        return n + 1;
    }
};
