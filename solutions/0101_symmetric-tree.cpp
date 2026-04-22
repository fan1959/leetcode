// LeetCode Solution: Symmetric Tree
// Runtime: 0 ms | Memory: 18.2 MB
// Tags: Tree, Depth-First Search, Breadth-First Search, Binary Tree
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
    bool issame(TreeNode*leftnode ,TreeNode* rightnode){
        if(leftnode==nullptr && rightnode==nullptr){
            return true;
        }
        else if(leftnode==nullptr || rightnode==nullptr){
            return false;
        }
        else if(leftnode->val==rightnode->val){
            return issame(leftnode->left,rightnode->right) && issame(leftnode->right,rightnode->left);
        }
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        return issame(root->left,root->right);
    }
};