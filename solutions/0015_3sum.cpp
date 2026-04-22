// LeetCode Solution: 3Sum
// Runtime: 83 ms | Memory: 28.3 MB
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
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        if(nums[nums.size()-1]<0)return result;
        for(int i=0;i<nums.size()-2;i++){
            while(i<nums.size()-2 && i>0 && nums[i]==nums[i-1]){
                i++;
            }
            int left=i+1,right=nums.size()-1;
            int sum=nums[i]+nums[left]+nums[right];
            while(left<right){
            if(sum==0){
                result.push_back({nums[i],nums[left],nums[right]});
                while(left+1<right && nums[left]==nums[left+1]){
                    left++;
                }
                left++;
                while(right-1>left && nums[right]==nums[right-1]){
                    right--;
                }
                right--;
            }
            else if(sum<0){
                while(left+1<right && nums[left]==nums[left+1]){
                    left++;
                }
                left++;
            }
            else{
                while(right-1>left && nums[right]==nums[right-1]){
                    right--;
                }
                right--;
            }
            sum=nums[i]+nums[left]+nums[right];
            }
        }
        return result;
    }
};