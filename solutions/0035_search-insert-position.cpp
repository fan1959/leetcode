// LeetCode Solution: Search Insert Position
// Runtime: 0 ms | Memory: 13.4 MB
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
    int searchInsert(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(),nums.end(),target);
        return it-nums.begin();
    }
};