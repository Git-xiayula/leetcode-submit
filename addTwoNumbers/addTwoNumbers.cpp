//
// Created by xiayula on 16/7/12.
//
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        int carry = 0;
        while(l1 && l2){
            int tmp = l1->val + l2->val + carry;
            ListNode* node = new ListNode(tmp%10);
            carry = tmp/10;
            l1 = l1->next;
            l2 = l2->next;
            p->next = node;
            p = node;
        }
        while(l1){
            int tmp = l1->val + carry;
            ListNode* node = new ListNode(tmp%10);
            carry = tmp/10;
            l1 = l1->next;
            p->next = node;
            p = node;
        }
        while(l2){
            int tmp = l2->val + carry;
            ListNode* node = new ListNode(tmp%10);
            carry = tmp/10;
            l2 = l2->next;
            p->next = node;
            p = node;
        }
        if(carry){
            ListNode* node = new ListNode(carry);
            p->next = node;
        }
        return head->next;
    }
};