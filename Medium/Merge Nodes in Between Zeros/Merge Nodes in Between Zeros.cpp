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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * p = head, *q = nullptr, * node = nullptr;
        while(p->next != nullptr){
            if(p->val ==0){
                int sum {0};
                p = p->next;
                while(p!=nullptr && p->val != 0){
                    sum += p->val;
                    p = p->next;
                }
                node = new ListNode(sum);
                if(q==nullptr){
                    q = node;
                    head = q;
                }
                else{
                    q ->next = node;
                    q= q->next;
                }
            }
        }
    return head;
    }
};
