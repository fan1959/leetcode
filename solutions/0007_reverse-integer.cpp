// LeetCode Solution: Reverse Integer
// Runtime: 0 ms | Memory: 8.5 MB
// Tags: Math
//
// 个人解题思路：
//   - 初始思路: 转字符串反转后转回整数。
//   - 问题所在: 字符串开销大，且需要注意溢出检测。
//   - 改进方法: 逐位取模弹出数字，弹出时检查是否溢出（|res|>INT_MAX/10 或相等时个位超限）。
//   - 时间复杂度: O(log₁₀|x|)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int reverse(int x) {
        int result=0;
        while(x!=0){
            int lownum=x%10;
            if(result>INT_MAX/10 || (result==INT_MAX/10 && lownum>7))return 0;
            if(result<INT_MIN/10 || (result==INT_MIN/10 && lownum<-8)) return 0;
            result=result*10+lownum;
            x=x/10;
        }

        return result;
    }
};
