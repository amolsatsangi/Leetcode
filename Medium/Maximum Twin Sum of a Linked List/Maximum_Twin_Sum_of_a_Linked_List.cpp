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
    ListNode * reverse_list(ListNode* head){
        ListNode* current = head, *prev = nullptr, *next = nullptr;
        while(current){
            next = current -> next;
            current-> next = prev;
            prev = current;
            current = next;
        }
    return prev;
    }
    int pairSum(ListNode* head) {
        ListNode * p = head, * q = head, *last;
        while(q!=nullptr){
            last = p;
            p=p->next;
            q=q-> next->next;
        }
        ListNode * r_head = reverse_list(p);
        last->next = r_head;
        q = r_head;
        int sum {0}, max_sum{INT_MIN};
        p=head;
        while(q){
            sum = q->val+p-> val;
            q = q->next;
            p = p->next;
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};
