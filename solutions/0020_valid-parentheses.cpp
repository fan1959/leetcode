// LeetCode Solution: Valid Parentheses
// Runtime: 0 ms | Memory: 8.7 MB
// Tags: Stack, String
//
// 个人解题思路：
//   - 初始思路: 用栈记录左括号，遇见右括号时弹出匹配。
//   - 问题所在: -
//   - 改进方法: 遇到左括号入栈，遇到右括号弹出并检查是否匹配，最后栈空则合法。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(n)
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
