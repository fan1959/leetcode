// LeetCode Solution: Binary Tree Level Order Traversal
// Runtime: 4 ms | Memory: 16.9 MB
// Tags: Tree, Breadth-First Search, Binary Tree
//
// 个人解题思路：
//   - 初始思路: 深度优先遍历然后按层排序。
//   - 问题所在: 不知道深度，无法直接分层。
//   - 改进方法: BFS 队列按层扩展，每层结束时记录当前队列大小，控制每层节点数。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(n)
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==nullptr)return result;
        queue<TreeNode*>myqueue;
        myqueue.push(root);
        while(!myqueue.empty()){
            int size=myqueue.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode* frontnode=myqueue.front();
                myqueue.pop();
                temp.push_back(frontnode->val);
                if(frontnode->left!=nullptr){
                    myqueue.push(frontnode->left);
                }
                if(frontnode->right!=nullptr){
                    myqueue.push(frontnode->right);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
