// LeetCode Solution: Next Permutation
// Runtime: 0 ms | Memory: 15.4 MB
// Tags: Array, Two Pointers
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
    void nextPermutation(vector<int>& nums) {
        std::next_permutation(nums.begin(),nums.end());
    }
};