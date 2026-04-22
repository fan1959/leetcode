// LeetCode Solution: Longest Palindromic Substring
// Runtime: 16 ms | Memory: 9.3 MB
// Tags: Two Pointers, String, Dynamic Programming
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