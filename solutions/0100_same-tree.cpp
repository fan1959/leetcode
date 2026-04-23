// LeetCode Solution: Same Tree
// Runtime: 0 ms | Memory: 12.5 MB
// Tags: Tree, Depth-First Search, Breadth-First Search, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 同时遍历两棵树，比较每个节点。
//   - 问题所在: -
//   - 改进方法: 递归：两树都空返回 true；根节点不等返回 false；递归比较左右子树。
//   - 时间复杂度: O(min(m,n))
//   - 空间复杂度: O(min(m,n))
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
    bool issame(TreeNode*p,TreeNode* q){
      if(p==nullptr && q==nullptr){
        return true;  
      }
      else if(p==nullptr ||q==nullptr){
        return false;
      }
      else if(p->val==q->val){
        return issame(p->left,q->left) && issame(p->right,q->right);
      }
      else return false;  
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return issame(p,q);
    }
};
