// LeetCode Solution: Reverse Nodes in k-Group
// Runtime: 0 ms | Memory: 16.3 MB
// Tags: Recursion, Linked List
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
//
// --------------------------------------------------

class Solution {
public:
    // 辅助函数：翻转 [head, tail) 之间的节点（左闭右开）
    ListNode* reverseList(ListNode* head, ListNode* tail) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while (cur != tail) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* pre = &dummy; // pre 始终指向“待翻转组”的前一个节点

        while (head != nullptr) {
            ListNode* tail = pre;
            // 1. 查看剩余部分长度是否大于等于 k
            for (int i = 0; i < k; i++) {
                tail = tail->next;
                if (tail == nullptr) {
                    return dummy.next; // 不够 k 个，保持原样直接返回
                }
            }

            // 2. 记住这一组的下一个起点（下一组的头）
            ListNode* nextGroupHead = tail->next;

            // 3. 翻转当前组
            // 翻转前：pre -> head -> ... -> tail -> nextGroupHead
            // 翻转后：pre -> tail -> ... -> head -> nextGroupHead
            ListNode* newHead = reverseList(head, nextGroupHead);

            // 4. 把翻转后的结果缝合回原链表
            pre->next = newHead;
            head->next = nextGroupHead;

            // 5. 指针位移，准备处理下一组
            pre = head; // head 翻转后变成了组内的最后一个，所以它是下一组的前驱
            head = nextGroupHead;
        }

        return dummy.next;
    }
};