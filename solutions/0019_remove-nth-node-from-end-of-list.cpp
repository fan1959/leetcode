// LeetCode Solution: Remove Nth Node From End Of List
// Runtime: 0 ms | Memory: 14.8 MB
// Tags: Linked List, Two Pointers
//
// 个人解题思路：
//   - 初始思路: 先遍历得到链表长度，再走 n 步删除。
//   - 问题所在: 需要遍历两次。
//   - 改进方法: 快慢指针：快指针先走 n 步，然后齐头并进，删除快指针的下一个节点。
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* headnode=new ListNode(0,head);
        ListNode* fast=headnode;
        ListNode* slow=headnode;
        for(int i=0;i<=n;i++){
            fast=fast->next;    
        }
        while(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return headnode->next;
    }
};
