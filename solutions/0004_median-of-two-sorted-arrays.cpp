// LeetCode Solution: Median of Two Sorted Arrays
// Runtime: 7 ms | Memory: 93.6 MB
// Tags: Array, Binary Search, Divide and Conquer
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        std::sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==1)
        {
            return nums1[nums1.size()/2];
        }
        else{
            return ((double)nums1[nums1.size()/2]+nums1[nums1.size()/2-1])/2;
        }
    }
};