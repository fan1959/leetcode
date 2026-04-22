// LeetCode Solution: Permutations
// Runtime: 0 ms | Memory: 10.4 MB
// Tags: Array, Backtracking
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
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        std::sort(nums.begin(),nums.end());
        vector<int>temp(nums);
        result.push_back(nums);
        std::next_permutation(nums.begin(),nums.end());
        while(temp!=nums){
             result.push_back(nums);
            std::next_permutation(nums.begin(),nums.end());
        }
        return result;
    }
};