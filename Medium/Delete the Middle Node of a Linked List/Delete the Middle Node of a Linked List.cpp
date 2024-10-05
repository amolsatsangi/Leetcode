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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p= head, *q = head;
        if(head ->next == nullptr)
            return nullptr;
        while(q!= nullptr && q->next != nullptr){
            q = q->next->next;
            if(q!= nullptr && q ->next != nullptr)
                p = p->next;
        }
        p ->next = p->next->next;
    return head;
    }
};
