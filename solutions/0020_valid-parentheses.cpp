// LeetCode Solution: Valid Parentheses
// Runtime: 0 ms | Memory: 8.7 MB
// Tags: Stack, String
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
    bool isValid(string s) {
        stack<char> mystack;
        mystack.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!mystack.empty() && mystack.top()=='(' && s[i]==')'){
                mystack.pop();
            }
            else if(!mystack.empty() && mystack.top()=='[' && s[i]==']'){
                mystack.pop();
            }
            else if(!mystack.empty() && mystack.top()=='{' && s[i]=='}'){
                mystack.pop();
            }
            else{
                mystack.push(s[i]);
            }
        }
        if(mystack.empty()){
            return true;
        }
        else return false;
    }
};