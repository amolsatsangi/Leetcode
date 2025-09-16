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
    void reorderList(ListNode* head) {
        stack<ListNode *> st;
        ListNode * q {head};
        while(q){
            st.push(q);
            q = q->next;
        }
        ListNode * p{head}, * temp;
        int count{0};
        while(p){
            ListNode * node = st.top();
            node ->next = nullptr;
            st.pop();
            temp = p->next;
            p ->next = node;
            if(node !=temp){
                node ->next = temp;
                p = temp;
            }
            else{
                node->next = nullptr;
                p= nullptr;
            }
        }
    }
};
