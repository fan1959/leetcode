// LeetCode Solution: Find First and Last Position of Element in Sorted Array
// Runtime: 0 ms | Memory: 17.1 MB
// Tags: Array, Binary Search
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
    vector<int> searchRange(vector<int>& nums, int target) {
        auto left=lower_bound(nums.begin(),nums.end(),target);
        auto right=upper_bound(nums.begin(),nums.end(),target);
        if(left==nums.end() || *left!=target){
            return {-1,-1};
        }
        int leftcount=distance(nums.begin(),left);
        int rightcount=distance(nums.begin(),right-1);
        return {leftcount,rightcount};
    }
};