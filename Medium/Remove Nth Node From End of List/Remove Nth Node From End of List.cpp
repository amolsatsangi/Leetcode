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

        ListNode* p = head, *q = head;
        while(n){
            q = q->next;
            n--;
        }
        if(q==nullptr)
            return head->next;
        while(q->next != nullptr){
            q = q->next;
            p = p-> next;
        }
        q = p->next;
        p->next = q->next;
    return head;
    }
};
