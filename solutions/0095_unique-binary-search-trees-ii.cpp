// LeetCode Solution: Unique Binary Search Trees Ii
// Runtime: 4 ms | Memory: 18.8 MB
// Tags: Tree, Binary Search Tree, Dynamic Programming, Backtracking, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 对每个根枚举所有可能的左右子树组合。
//   - 问题所在: 组合数量呈卡特兰数增长，返回值很大。
//   - 改进方法: 递归构造：给定范围 [low, high]，选每个数作根，递归构造左右子树，所有左右配对组合起来。
//   - 时间复杂度: 卡特兰数级别
//   - 空间复杂度: O(卡特兰数)
//
// --------------------------------------------------

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*>generate(int start,int end){
        vector<TreeNode*>alltrees;
        if(start>end){
            alltrees.push_back(nullptr);
            return alltrees;
        }
        for(int i=start;i<=end;i++){
            vector<TreeNode*>lefttrees=generate(start,i-1);
            vector<TreeNode*>righttrees=generate(i+1,end);
            for(auto& leftnode:lefttrees){
                for(auto& rightnode:righttrees){
                    TreeNode* curtree=new TreeNode(i);
                    curtree->left=leftnode;
                    curtree->right=rightnode;
                    alltrees.push_back(curtree);
                }
            }
        }
        return alltrees;
    }
    vector<TreeNode*> generateTrees(int n) {
        return generate(1,n);
    }
};
