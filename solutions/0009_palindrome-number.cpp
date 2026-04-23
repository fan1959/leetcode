// LeetCode Solution: Palindrome Number
// Runtime: 0 ms | Memory: 8.3 MB
// Tags: Math
//
// 个人解题思路：
//   - 初始思路: 转字符串判断。
//   - 问题所在: 字符串有额外开销。
//   - 改进方法: 反转后半部分数字，与前半部分比较，避免溢出。
//   - 时间复杂度: O(log₁₀x)
//   - 空间复杂度: O(1)
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
