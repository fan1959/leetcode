// LeetCode Solution: Trapping Rain Water
// Runtime: 3 ms | Memory: 26.7 MB
// Tags: Stack, Array, Two Pointers, Dynamic Programming, Monotonic Stack
//
// 个人解题思路：
//   - 初始思路: 枚举每个位置，找左右最高后计算。
//   - 问题所在: O(n²)。
//   - 改进方法: 双指针：左右指针向中间移动，根据左右最大高度差计算每个位置的水量。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int trap(vector<int>& height) {
        int len=height.size();
        int capcity=0;
        if(len<3)return 0;
        vector<int>leftmax(len);vector<int>rightmax(len);
        leftmax[0]=height[0];
        rightmax[len-1]=height[len-1];
        for(int i=1;i<len;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        for(int i=len-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        for(int i=1;i<len-1;i++){
            capcity+=min(leftmax[i],rightmax[i])-height[i];
        }
        return capcity;
    }
};
