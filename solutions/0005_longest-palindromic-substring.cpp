// LeetCode Solution: Longest Palindromic Substring
// Runtime: 16 ms | Memory: 9.3 MB
// Tags: Two Pointers, String, Dynamic Programming
//
// 个人解题思路：
//   - 初始思路: 枚举所有子串，判断是否回文，取最长。
//   - 问题所在: 子串数量 O(n²)，判断回文 O(n)，总体 O(n³) 超时。
//   - 改进方法: 中心扩展法，以每个位置为中心向两边扩展，时间 O(n²)；或 Manacher 算法 O(n)。
//   - 时间复杂度: O(n²)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    
    string longestPalindrome(string s) {
        int len=s.size();
        int maxlen=1;
        int startindex=0;
        auto expand=[&](int left,int right){
            while(left>=0 && right<len && s[left]==s[right]){
                left--;
                right++;
            }
            int len=right-left-1;
            if(maxlen<len){
                maxlen=len;
                startindex=left+1;
            }
        };
        for(int i=0;i<len;i++){
            expand(i,i);
            expand(i,i+1);
        }
        return s.substr(startindex,maxlen);

    }
};
