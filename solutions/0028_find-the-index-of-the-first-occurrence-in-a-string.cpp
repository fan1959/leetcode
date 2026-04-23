// LeetCode Solution: Find The Index Of The First Occurrence In A String
// Runtime: 0 ms | Memory: 8.9 MB
// Tags: Two Pointers, String, String Matching
//
// 个人解题思路：
//   - 初始思路: (待补充)
//   - 问题所在: (待补充)
//   - 改进方法: (待补充)
//   - 时间复杂度: (待补充)
//   - 空间复杂度: (待补充)
//
// --------------------------------------------------

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=string::npos){
            return haystack.find(needle);
        }
        else
            return -1;
    }
};
