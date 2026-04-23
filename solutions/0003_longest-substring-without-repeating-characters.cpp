// LeetCode Solution: Longest Substring Without Repeating Characters
// Runtime: 0 ms | Memory: 11.3 MB
// Tags: Hash Table, String, Sliding Window
//
// 个人解题思路：
//   - 初始思路: 暴力枚举所有子串，用集合判断是否有重复。
//   - 问题所在: 子串数量 O(n²)，整体 O(n³) 必定超时。
//   - 改进方法: 滑动窗口 + 哈希表记录字符最新位置，右指针扩展时收缩左指针，总共只遍历两次。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(min(m, σ))
//
// --------------------------------------------------

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hashtable[128]={0};
        int left=0;
        int right=0;
        int maxlen=0;
        while(right<s.size()){
            hashtable[s[right]]++;
            while(hashtable[s[right]]>1){
                hashtable[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};
