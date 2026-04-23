// LeetCode Solution: Divide Two Integers
// Runtime: 0 ms | Memory: 8.6 MB
// Tags: Bit Manipulation, Math
//
// 个人解题思路：
//   - 初始思路: 累减被除数，统计次数。
//   - 问题所在: 可能减很多次，效率极低。
//   - 改进方法: 倍增思想：用除数不断左移（乘2），逼近被除数，减少迭代次数（二进制除法）。
//   - 时间复杂度: O(log |dividend| / |divisor|)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        bool negative = (dividend > 0) ^ (divisor > 0);
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        
        long long res = 0;
        while (a >= b) {
            long long temp = b;
            long long multiple = 1;
            
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            
            a -= temp;
            res += multiple;
        }

        return negative ? -res : res;
    }
};
