// LeetCode Solution: Find the Index of the First Occurrence in a String
// Runtime: 0 ms | Memory: 8.9 MB
// Tags: Two Pointers, String, String Matching
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
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=string::npos){
            return haystack.find(needle);
        }
        else
            return -1;
    }
};