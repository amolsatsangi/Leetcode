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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)
            return head;
        ListNode * p{head}, *q{head -> next};
        if(q==nullptr){
            if(head->val == val)
                return nullptr;
            else return head;
        }
        while(head -> val == val){
            head = head -> next;
            p = head;
            if(p == nullptr)
                break;
            q = p -> next;
        }
        while(q!=nullptr){
            if(q->val == val){
                p->next = q ->next;
                q = p->next;
            }
            else{
            p = p->next; 
            q = p -> next;
            }
        }
    return head;
    }
};
