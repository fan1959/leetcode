// LeetCode Solution: Letter Combinations Of A Phone Number
// Runtime: 0 ms | Memory: 9.3 MB
// Tags: Hash Table, String, Backtracking
//
// 个人解题思路：
//   - 初始思路: 递归生成所有组合。
//   - 问题所在: -
//   - 改进方法: 回溯（DFS）：每层代表一个数字，映射到字母列表，依次选择每个字母递归深入。
//   - 时间复杂度: O(4^n)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    vector<string>result;
    string mapping[10] = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    void dfs(int index,string& digits,string current){
        if(index==digits.size()){
            result.push_back(current);
            return;
        }
        int temp=digits[index]-'0';
        string letter=mapping[temp];
        for(char c:letter){
            dfs(index+1,digits,current+c);
        }

    }
    vector<string> letterCombinations(string digits) {
        int len=digits.size();
        dfs(0,digits,"");
        return result;
    }
};
