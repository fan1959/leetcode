// LeetCode Solution: Swap Nodes In Pairs
// Runtime: 0 ms | Memory: 11.1 MB
// Tags: Recursion, Linked List
//
// 个人解题思路：
//   - 初始思路: 将链表转数组，按奇偶交换后再重建链表。
//   - 问题所在: 多占空间，不够优雅。
//   - 改进方法: 递归或迭代：两两交换相邻节点，关键是指向翻转后的节点。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* headnode=new ListNode(0,head);
        ListNode* result=headnode;
        while(headnode->next!=nullptr && headnode->next->next!=nullptr){
            ListNode* temp=headnode->next;
            headnode->next=temp->next;
            temp->next=headnode->next->next;
            headnode->next->next=temp;
            headnode=temp;
        }
        return result->next;
    }
};
