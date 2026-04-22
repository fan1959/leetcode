// LeetCode Solution: Trapping Rain Water
// Runtime: 3 ms | Memory: 26.7 MB
// Tags: Stack, Array, Two Pointers, Dynamic Programming, Monotonic Stack
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
    int trap(vector<int>& height) {
        int len=height.size();
        int capcity=0;
        if(len<3)return 0;
        vector<int>leftmax(len);vector<int>rightmax(len);
        leftmax[0]=height[0];
        rightmax[len-1]=height[len-1];
        for(int i=1;i<len;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        for(int i=len-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        for(int i=1;i<len-1;i++){
            capcity+=min(leftmax[i],rightmax[i])-height[i];
        }
        return capcity;
    }
};