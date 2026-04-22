// LeetCode Solution: Merge k Sorted Lists
// Runtime: 3 ms | Memory: 18.8 MB
// Tags: Linked List, Divide and Conquer, Heap (Priority Queue), Merge Sort
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int listslen=lists.size();
        ListNode* result=new ListNode(0,nullptr);
        ListNode* endresult=result;
        int totalcount=0;
        vector<int> tempall(totalcount,0);
        if(listslen==0)return nullptr;
        int iequalsempty=0;
        int i=0;
        for(auto itera=lists.begin();i<listslen && itera!=lists.end();i++,itera++){
            int icount=0;
            ListNode* templist=lists[i];
            while(lists[i]!=nullptr){
                icount++;
                tempall.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
            totalcount+=icount;
            if(templist==nullptr){
                iequalsempty++;
            }
        }
        if(iequalsempty==listslen)return nullptr;
        std::sort(tempall.begin(),tempall.end());
        for(int i=0;i<tempall.size();i++){
            ListNode* temp=new ListNode(tempall[i],nullptr);
            result->next=temp;
            result=result->next;
        }

        return endresult->next;
    }
};