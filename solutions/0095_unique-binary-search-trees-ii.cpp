// LeetCode Solution: Unique Binary Search Trees II
// Runtime: 4 ms | Memory: 18.8 MB
// Tags: Tree, Binary Search Tree, Dynamic Programming, Backtracking, Binary Tree
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
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