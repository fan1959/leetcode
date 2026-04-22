// LeetCode Solution: Remove Element
// Runtime: 0 ms | Memory: 11.5 MB
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
    int removeElement(vector<int>& nums, int val) {
        int count=nums.size();
        std::sort(nums.begin(),nums.end());
        if(count==0 || nums[0]>val || nums[count-1]<val){
            return count;
        }
        int left=0,right=0;
        while(right<nums.size() && nums[right]!=val){
            right++;
        }
        left=right;
        while(right<nums.size() && nums[right]==val){
            right++;
            count--;
        }
        while(right<nums.size()){
            nums[left++]=nums[right++];
        }
        return count;
    }
};