// LeetCode Solution: Divide Two Integers
// Runtime: 0 ms | Memory: 8.6 MB
// Tags: Bit Manipulation, Math
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
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