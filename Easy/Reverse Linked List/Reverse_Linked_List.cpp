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
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head, *n = nullptr, *prev = nullptr;
        if(head == nullptr)
            return nullptr;
            n = head->next;
            while(n!=nullptr){
                cur ->next = prev;
                prev = cur;
                cur = n;
                n = n->next;
            }
            cur ->next = prev;
        return cur;
    }
};
