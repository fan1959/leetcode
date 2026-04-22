// LeetCode Solution: Binary Tree Inorder Traversal
// Runtime: 0 ms | Memory: 10.9 MB
// Tags: Stack, Tree, Depth-First Search, Binary Tree
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
    vector<int>result;
    void Traversal(TreeNode* root){
        if(root==nullptr)return;
        Traversal(root->left);
        result.push_back(root->val);
        Traversal(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        Traversal(root);
        return result;
    }
};