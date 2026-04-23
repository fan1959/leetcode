// LeetCode Solution: Add Two Numbers
// Runtime: 2 ms | Memory: 75.4 MB
// Tags: Recursion, Linked List, Math
//
// 个人解题思路：
//   - 初始思路: 将两个链表看成数值，直接相加后重建链表。
//   - 问题所在: 数值可能超出整型范围，不能简单转数值。
//   - 改进方法: 按位逐个相加，用 carry 处理进位，保持链表结构同时遍历两条链表。
//   - 时间复杂度: O(max(m,n))
//   - 空间复杂度: O(max(m,n))
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* headnode=new ListNode(0,nullptr);
        ListNode* result=headnode;
        int jinwei=0;
        while(l1!=nullptr || l2!=nullptr || jinwei!=0){
            int l1val=l1!=nullptr?l1->val:0;
            int l2val=l2!=nullptr?l2->val:0;
            int sum=l1val+l2val+jinwei;
            int curdigit=sum%10;
            jinwei=sum/10;
            ListNode* temp=new ListNode(curdigit,nullptr);
            headnode->next=temp;
            headnode=headnode->next;
            if(l1!=nullptr)l1=l1->next;
            if(l2!=nullptr)l2=l2->next;
        }
        return result->next;
    }
};
