// LeetCode Solution: Reverse Integer
// Runtime: 3 ms | Memory: 8.8 MB
// Tags: Math
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
//
// --------------------------------------------------

#include<climits>
class Solution {
public:
    int reverse(int x) {
        if(x==0)return x;
        if(x==INT_MIN)return 0;
        bool isopsitive=true;
        int count=0;
        int temp=x;
        if(temp<0)
        {
            temp=-temp;
            isopsitive=false;
        }
        while(temp!=0){
            temp/=10;
            count++;
        }
        long long result=0;
        if(x<0)x=-x;
        while(x!=0){
            int lownum =x%10;
            x/=10;
            result+=(lownum*pow(10,count-1));
            count--;
        }
        if(result>=INT_MAX||result<=INT_MIN)return 0;
        if(isopsitive)return static_cast<int>(result);
        else return static_cast<int>(-result);
    }
};