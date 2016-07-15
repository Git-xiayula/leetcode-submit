//
// Created by xiayula on 16/7/15.
//
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h = new ListNode(0);
        h->next = head;
        ListNode* pre = h;
        ListNode* end = h;
        while (end->next){
            end = end->next;
            if(n > 0){
                n--;
            }else{
                pre = pre->next;
            }
        }
        ListNode* node = pre->next;
        pre->next = pre->next->next;
        free(node);
        return h->next;
    }
};
