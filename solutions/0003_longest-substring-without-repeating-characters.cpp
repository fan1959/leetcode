// LeetCode Solution: Longest Substring Without Repeating Characters
// Runtime: 0 ms | Memory: 11.3 MB
// Tags: Hash Table, String, Sliding Window
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