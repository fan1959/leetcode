// LeetCode Solution: 3Sum Closest
// Runtime: 15 ms | Memory: 13.8 MB
// Tags: Array, Two Pointers, Sorting
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
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int closestsum=nums[0]+nums[1]+nums[2];
        int len=nums.size();
        for(int i=0;i<len-2;i++){
            int left=i+1,right=len-1;
            int currentsum=nums[i]+nums[left]+nums[right];
            while(left<right){
            if(abs(currentsum-target)<abs(closestsum-target)){
                closestsum=currentsum;
            }
                if(currentsum<target){
                left++;
                }
                else if(currentsum>target){
                    right--;
                }
                else {
                    return target;
                }
            currentsum=nums[i]+nums[left]+nums[right];
            }
        }
        return closestsum;
    }
};