// LeetCode Solution: Powx N
// Runtime: 0 ms | Memory: 8.4 MB
// Tags: Recursion, Math
//
// 个人解题思路：
//   - 初始思路: 循环累乘。
//   - 问题所在: n 可能很大，O(n) 太慢。
//   - 改进方法: 快速幂（二进制幂）：把 n 拆成二进制，逐位翻倍，n 为负时取倒数。
//   - 时间复杂度: O(log|n|)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        double res=1.0;
        if(N<0){
            x=1/x;
            N=-N;
        }
        while(N>0){
            if(N%2==1){
                res*=x;
            }
            x*=x;
            N/=2;
        }
        return res;
    }
};
