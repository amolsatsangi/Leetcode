/*********************************************************************
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:

1 -> 2 -> 4

1 -> 3 -> 4

1 -> 1 -> 2 -> 3 -> 4 -> 4 
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.


********************************************************************/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p {list1},*q {list2};
        ListNode *new_list {nullptr}, *ptr{nullptr},  *node{nullptr};
        while(p!=nullptr && q!= nullptr){
            if(p->val < q->val){
                node = new ListNode(p->val);
                if(new_list == nullptr){
                    new_list = node;
                    ptr = new_list;
                }
                else{
                    ptr -> next = node;
                    ptr = ptr -> next ;
                }
                p = p -> next;
            }
            else{
                node = new ListNode(q->val);
                if(new_list == nullptr){
                    new_list = node;
                    ptr = new_list;
                }
                else{
                    ptr -> next = node;
                    ptr = ptr -> next ;
                }
                q = q-> next;
                cout << ptr -> val<< endl;
            }
        }
        while(p!= nullptr){
            node = new ListNode(p->val);
                if(new_list == nullptr){
                    new_list = node;
                    ptr = new_list;
                }
                else{
                    ptr -> next = node;
                    ptr = ptr -> next;
                }
                p = p -> next;
        }
        while(q!= nullptr){
            node = new ListNode(q->val);
                if(new_list == nullptr){
                    new_list = node;
                    ptr = new_list;
                }
                else{
                    ptr -> next = node;
                    ptr = ptr -> next;
                }
                q = q-> next;
        }
    return new_list;
    }
};
