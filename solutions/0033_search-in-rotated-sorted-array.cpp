// LeetCode Solution: Search in Rotated Sorted Array
// Runtime: 0 ms | Memory: 14.8 MB
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
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int mid=(left+right)/2;
        while(left<=right){
            if(nums[mid]==target){
                return mid;   
            }
            if(nums[left]<=nums[mid]){
                if(target>=nums[left] && target<=nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else if(nums[right]>=nums[mid]){
                if(target>=nums[mid] && target<=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            mid=(left+right)/2;
        }
        return -1;
    }
};