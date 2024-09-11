/***********************
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:

2 -> 4 -> 3

5 -> 6 -> 4

7 -> 0 -> 8

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros


************************************/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum {0}, rem {0}, l_sum {0}, carry {0};
        ListNode  *p ,*q, *nstart;
        l_sum = l1 -> val + l2 -> val;
        rem = l_sum % 10;
        carry =  l_sum / 10;
        p = new ListNode(rem); 
        nstart = p; l1 = l1-> next; l2 = l2 -> next;
        while(l1 != NULL && l2 != NULL){
            l_sum = l1 -> val + l2 -> val+ carry;
            rem = l_sum % 10;
            carry =  l_sum / 10;
            q = new ListNode(rem);
            p -> next = q;
            p = q;
            l1 = l1-> next; l2 = l2 -> next;
        }
        while(l1 != NULL){
            l_sum = l1 -> val + carry;
            rem = l_sum % 10;
            carry =  l_sum / 10;
            q = new ListNode(rem);
            p -> next = q;
            p = q;
            l1 = l1-> next;
        }
        while(l2 != NULL){
            l_sum = l2 -> val + carry;
            rem = l_sum % 10;
            carry =  l_sum / 10;
            q = new ListNode(rem);
            p -> next = q;
            p = q;
            l2 = l2-> next;
        }
        if(carry){
            q = new ListNode(carry);
            p -> next = q;
            p = q;
        }
        return nstart;
    }
};
