// LeetCode Solution: Recover Binary Search Tree
// Runtime: 0 ms | Memory: 59.6 MB
// Tags: Tree, Depth-First Search, Binary Search Tree, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 中序遍历得到序列，找两个错误节点交换恢复。
//   - 问题所在: 需要 O(n) 额外空间存中序序列。
//   - 改进方法: Morris 中序遍历：常数空间内找到两个错误节点（第一个是前驱>当前，第二个是前驱>当前），交换即可。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
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
