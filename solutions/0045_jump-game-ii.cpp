// LeetCode Solution: Jump Game Ii
// Runtime: 0 ms | Memory: 20 MB
// Tags: Greedy, Array, Dynamic Programming
//
// 个人解题思路：
//   - 初始思路: BFS 求最少步数。
//   - 问题所在: BFS O(n²) 且队列开销大。
//   - 改进方法: 贪心：在每步可达范围内找最远覆盖位置，步数+1，更新边界。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int jump(vector<int>& nums) {
        int len=nums.size();
        if(len==1)return 0;
        int maxpos=0;
        int end=0;
        int steps=0;
        for(int i=0;i<len-1;i++){
            maxpos=max(maxpos,nums[i]+i);
            if(i==end){
                steps++;
                end=maxpos;
            }
        }
        return steps;
    }
};
