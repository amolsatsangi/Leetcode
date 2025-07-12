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
        if(head==nullptr || head->next == nullptr)
            return head;
        ListNode * p{head},*prev{nullptr};
        head = head->next;
        while(p!=nullptr){
            ListNode * t2 = p->next;
            if(t2!=nullptr){
                p->next = t2->next;
                t2->next = p;
                if(prev){
                    prev->next = t2;
                }
            }
            prev = p;
            p = p->next;
        }
    return head;
    }
};
