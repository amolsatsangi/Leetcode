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
    ListNode * reverse(ListNode *head){
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode * l =nullptr, * prev= nullptr;
        int carry =0;
        while(l1!=nullptr && l2!=nullptr){
            int sum = l1->val+l2->val+carry;
            carry = sum/10;
            int temp = sum%10;
            ListNode * node = new ListNode(temp);
            if(l == nullptr){
                l = node;
                prev = l;
            }
            else{
                prev->next = node;
                prev = node;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            int sum = l1->val+carry;
            carry = sum/10;
            int temp = sum%10;
            ListNode * node = new ListNode(temp);
            if(l == nullptr){
                l = node;
                prev = l;
            }
            else{
                prev->next = node;
                prev = node;
            }
            l1= l1->next;
        }

        while(l2!=nullptr){
            int sum = l2->val+carry;
            carry = sum/10;
            int temp = sum%10;
            ListNode * node = new ListNode(temp);
            if(l == nullptr){
                l = node;
                prev = l;
            }
            else{
                prev->next = node;
                prev = node;
            }
            l2= l2->next;
        }
        if(carry){
            ListNode * node = new ListNode(carry);
            prev->next = node;

        }
        l=reverse(l);
    return l;
    }
};
