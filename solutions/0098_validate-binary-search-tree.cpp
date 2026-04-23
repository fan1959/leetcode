// LeetCode Solution: Validate Binary Search Tree
// Runtime: 0 ms | Memory: 21.6 MB
// Tags: Tree, Depth-First Search, Binary Search Tree, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 检查每个节点是否在合法范围内（递归）。
//   - 问题所在: 不能只看左右子节点，需要传递上下界。
//   - 改进方法: 递归时传递 (min, max) 边界约束，或者用中序遍历检查是否严格递增。
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
