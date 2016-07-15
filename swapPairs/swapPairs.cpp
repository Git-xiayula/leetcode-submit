//
// Created by xiayula on 16/7/15.
//
class Solution{
public:
    ListNode* swapPairs(ListNode* head){
        ListNode* h = new ListNode(0);
        h->next = head;
        ListNode* p = h;
        while (p->next && p->next->next){
            ListNode* next = p->next;
            p->next = next->next;
            next->next = next->next->next;
            p->next->next = next;
            p = next;
        }

        return h->next;
    }
};
