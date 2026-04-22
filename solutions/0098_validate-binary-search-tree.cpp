// LeetCode Solution: Validate Binary Search Tree
// Runtime: 0 ms | Memory: 21.6 MB
// Tags: Tree, Depth-First Search, Binary Search Tree, Binary Tree
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
    bool isValidBSTs(TreeNode*root,TreeNode* minnode,TreeNode* maxnode){
        if(root==nullptr){
            return true;
        }
        if(maxnode!=nullptr && root->val>=maxnode->val){
            return false;
        }
        if(minnode!=nullptr && root->val<=minnode->val)
        {
            return false;
        }
        bool leftbool=isValidBSTs(root->left,minnode,root);
        bool rightbool=isValidBSTs(root->right,root,maxnode);
        return leftbool && rightbool;

    }
    bool isValidBST(TreeNode* root) {
        return isValidBSTs(root,nullptr,nullptr);
    }
};