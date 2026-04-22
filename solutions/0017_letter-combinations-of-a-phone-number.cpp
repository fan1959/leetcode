// LeetCode Solution: Letter Combinations of a Phone Number
// Runtime: 0 ms | Memory: 9.3 MB
// Tags: Hash Table, String, Backtracking
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
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