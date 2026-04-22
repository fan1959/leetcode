// LeetCode Solution: Permutations II
// Runtime: 0 ms | Memory: 11 MB
// Tags: Array, Backtracking, Sorting
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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
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