//
// Created by xiayula on 16/7/15.
//
class Solution{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists){
        int len = lists.size();
        if(len == 0) return NULL;
        while (len > 1){
            if(len & 0X1){
                for(int i=0; i<len/2; i++) {
                    lists[i] = mergeTwoLists(lists[i], lists[len/2+1+i]);
                }
                len = len/2 + 1;
            }else{
                for(int i=0; i<len/2; i++) {
                    lists[i] = mergeTwoLists(lists[i], lists[len / 2 + i]);
                }
                len = len/2;
            }
        }
        return lists[0];
    }
    ListNode*  mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        while (l1 && l2){
            if(l1->val < l2->val){
                p->next = l1;
                l1 = l1->next;
                p = p->next;
            }else{
                p->next = l2;
                l2 = l2->next;
                p = p->next;
            }
        }
        p->next = l1 ? l1 : l2;
        return head->next;
    }

};
