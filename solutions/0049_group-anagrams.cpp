// LeetCode Solution: Group Anagrams
// Runtime: 19 ms | Memory: 24.5 MB
// Tags: Array, Hash Table, String, Sorting
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