// LeetCode Solution: Container With Most Water
// Runtime: 0 ms | Memory: 61.6 MB
// Tags: Greedy, Array, Two Pointers
//
// 个人解题思路：
//   - 初始思路: 枚举所有两柱子组合，求最大面积。
//   - 问题所在: O(n²) 必然超时。
//   - 改进方法: 双指针从两端向中间移动，面积取决于较短的那条，高度变小则宽减小，必排除掉一端。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int left=0,right=len-1;
        int maxcap=0;
        while(left<right){
            int h=min(height[left],height[right]);
            int cap=(right-left)*h;
            if(cap>maxcap){
                maxcap=cap;
            }
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxcap;
    }
};
