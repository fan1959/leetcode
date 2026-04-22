// LeetCode Solution: Recover Binary Search Tree
// Runtime: 0 ms | Memory: 59.6 MB
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
private:
    TreeNode* pre = nullptr;
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    void inorder(TreeNode* root) {
        if (root == nullptr) return;
        inorder(root->left);
        if (pre != nullptr && pre->val >= root->val) {
            if (first == nullptr) {
                first = pre;
            }
            second = root;
        }
        pre = root;
        inorder(root->right);
    }

public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        if (first && second) {
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
        }
    }
};