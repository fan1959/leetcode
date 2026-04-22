// LeetCode Solution: Remove Duplicates from Sorted Array
// Runtime: 0 ms | Memory: 22.1 MB
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
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int count=1;
        for(int right=1;right<nums.size();right++){
            while(right<nums.size() && nums[right]==nums[left]){
                right++;
            }
            if(right<nums.size()){
            nums[++left]=nums[right];
            count++;}
        }
        return count;
    }
};