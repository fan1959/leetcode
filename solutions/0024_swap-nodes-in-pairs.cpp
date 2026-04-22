// LeetCode Solution: Swap Nodes in Pairs
// Runtime: 0 ms | Memory: 11.1 MB
// Tags: Recursion, Linked List
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
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