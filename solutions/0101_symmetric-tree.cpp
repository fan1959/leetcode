// LeetCode Solution: Symmetric Tree
// Runtime: 0 ms | Memory: 18.2 MB
// Tags: Tree, Depth-First Search, Breadth-First Search, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 把树转成数组再判断对称。
//   - 问题所在: 需要额外 O(n) 空间。
//   - 改进方法: 递归比较左子树和右子树（镜像比较）：p.left 和 q.right 比，p.right 和 q.left 比。
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
