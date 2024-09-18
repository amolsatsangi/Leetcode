/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *midnode = NULL, *p = headA, *q = headB;
        while(p != NULL){
            q = headB;
            while(q != NULL){
                if(p == q){
                    midnode =  p;
                    break;
                }
                q = q->next;
            }
            if(midnode!= NULL)
            break;
            p = p->next;
        }
    return midnode;    
    }
};
