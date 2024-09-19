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
    int getDecimalValue(ListNode* head) {
        ListNode * p =head;
        int res = 0, j=0;
        vector<int> vec;
        while(p!= nullptr){
            vec.push_back(p->val);
            p= p->next;
        }
        for(int i=vec.size()-1;i>=0;i--){
            res = res + vec.at(i)*pow(2,j);
            j++;
        }
        cout<<res;
        return res;
    }
};
