// LeetCode Solution: Group Anagrams
// Runtime: 19 ms | Memory: 24.5 MB
// Tags: Array, Hash Table, String, Sorting
//
// 个人解题思路：
//   - 初始思路: 枚举所有字符串的排列，判断是否相同。
//   - 问题所在: 排列判断 O(k!) 极慢。
//   - 改进方法: 排序字符串作 key（或用字符计数数组），哈希表分组。
//   - 时间复杂度: O(n·k·logk)
//   - 空间复杂度: O(n·k)
//
// --------------------------------------------------

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        vector<string>group;
        unordered_map<string,vector<string>>hashmap;
        int len=strs.size();
        for(int i=0;i<len;i++){
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            hashmap[strs[i]].push_back(temp);
        }
        for(auto& it:hashmap){
            result.push_back(it.second);
        }
        return result;
    }
};
