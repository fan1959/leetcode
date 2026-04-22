// LeetCode Solution: Palindrome Number
// Runtime: 0 ms | Memory: 8.3 MB
// Tags: Math
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
    bool isPalindrome(int x) {
        if(x<0 ||(x%10==0 && x!=0))return false;
        int count=0;
        while(x>count){
            count=count*10+x%10;
            x/=10;
        }
        return x==count||x==count/10;
    }
};