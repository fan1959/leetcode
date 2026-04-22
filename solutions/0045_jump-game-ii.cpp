// LeetCode Solution: Jump Game II
// Runtime: 0 ms | Memory: 20 MB
// Tags: Greedy, Array, Dynamic Programming
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
    int jump(vector<int>& nums) {
        int len=nums.size();
        if(len==1)return 0;
        int maxpos=0;
        int end=0;
        int steps=0;
        for(int i=0;i<len-1;i++){
            maxpos=max(maxpos,nums[i]+i);
            if(i==end){
                steps++;
                end=maxpos;
            }
        }
        return steps;
    }
};