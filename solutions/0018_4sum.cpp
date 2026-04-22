// LeetCode Solution: 4Sum
// Runtime: 35 ms | Memory: 17.2 MB
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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        std::sort(nums.begin(),nums.end());
        if(nums.size()<4)return result;
        for(int i=0;i<nums.size()-3;i++){
            while(i>0 && i<nums.size()-3 && nums[i]==nums[i-1]){
                i++;
            }
            for(int j=i+1;j<nums.size()-2;j++){
                while(j>i+1 && j<nums.size()-2 && nums[j]==nums[j-1]){
                    j++;
                }
                int left=j+1,right=nums.size()-1;
                while(left<right){
                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left<right && nums[left]==nums[left+1]){
                            left++;
                        }
                        left++;
                        while(left<right && nums[right]==nums[right-1]){
                            right--;
                        }
                        right--;
                    }
                    if(sum<target){
                        while(left<right && nums[left]==nums[left+1]){
                            left++;
                        }
                        left++;
                    }
                    else if(sum>target){
                        while(left<right && nums[right]==nums[right-1]){
                            right--;
                        }
                        right--;
                    }
                }
            }
        }
        return result;
    }
};