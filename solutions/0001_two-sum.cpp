// LeetCode Solution: Two Sum
// Runtime: 4 ms | Memory: 14.6 MB
// Tags: Array, Hash Table
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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int len=nums.size();
        for(int i=0;i<len;i++){
            int another=target-nums[i];
            if(map.find(another)!=map.end()){
                return {i,map[another]};
                break;
            }
            map[nums[i]]=i;
        }
        return {};
    }
};