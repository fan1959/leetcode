// LeetCode Solution: Longest Common Prefix
// Runtime: 0 ms | Memory: 11.7 MB
// Tags: Trie, Array, String
//
// 个人解题思路：
//   - 初始思路: 以第一个字符串为基准，逐字符比较所有字符串。
//   - 问题所在: -
//   - 改进方法: 纵向扫描：比较所有字符串同一位置的字符，不相等时停止；或横向两两比较。
//   - 时间复杂度: O(S)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        for(int j=0;j<strs[0].size();j++){
            char c=strs[0][j];
            for(int i=1;i<len;i++){
                if(j==strs[i].size() || strs[i][j]!=c){
                    return strs[0].substr(0,j);
                }
            }
        }
        return strs[0];
    }
};
