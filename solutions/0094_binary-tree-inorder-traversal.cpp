// LeetCode Solution: Binary Tree Inorder Traversal
// Runtime: 0 ms | Memory: 10.9 MB
// Tags: Stack, Tree, Depth-First Search, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 递归中序遍历。
//   - 问题所在: -
//   - 改进方法: Morris 中序遍历 O(1) 空间，或显式栈模拟递归，核心是左子树全部入栈后弹出访问再处理右子树。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(h)
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
