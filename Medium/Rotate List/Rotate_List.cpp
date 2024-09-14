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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p{head}, *q;
        int n{0};
        while(head!= nullptr && p->next != nullptr){
                    q = p;
                    p= p->next;
                    n++;
            }
            n++;
            k = k%n;
        while(k && head!= nullptr){
            while(p->next != nullptr){
                    q = p;
                    p= p->next;
            }
            p->next = head;
            head = p;
            q->next = nullptr;
            k--;
        }
        return head;
    }
};
