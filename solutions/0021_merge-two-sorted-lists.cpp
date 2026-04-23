// LeetCode Solution: Merge Two Sorted Lists
// Runtime: 3 ms | Memory: 19.2 MB
// Tags: Recursion, Linked List
//
// 个人解题思路：
//   - 初始思路: 合并两个链表，遍历比较节点大小。
//   - 问题所在: -
//   - 改进方法: 用哨兵节点简化边界处理，逐个比较两个链表的节点，依次链接较小者。
//   - 时间复杂度: O(m+n)
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* headnode=new ListNode(0,nullptr);
        ListNode* result=headnode;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                headnode->next=list1;
                headnode=headnode->next;
                list1=list1->next;
            }
            else{
                headnode->next=list2;
                headnode=headnode->next;
                list2=list2->next;
            }
        }
        headnode->next=(list1!=nullptr)?list1:list2;
        return result->next;
    }
};
