// LeetCode Solution: Container With Most Water
// Runtime: 3 ms | Memory: 61.7 MB
// Tags: Greedy, Array, Two Pointers
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
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxcap=0;
        int left=0,right=n-1;
        int lower=height[left]<height[right]?height[left]:height[right];
        while(left<right){
            int currcap=(right-left)*lower;
            if(currcap>maxcap){
                maxcap=currcap;
            }
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            lower=height[left]<height[right]?height[left]:height[right];
        }
        return maxcap;
    }
};