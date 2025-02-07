# Intuition
Store all the nodes values and then find twin sum for nodes and return the maximum twin sum.

# Approach
* Traverse the linked list and store all node values in a vector
* Determine the size n of the vector.
* Initialize a variable sum to track the maximum twin sum.
* Use a loop to compute twin sums as vec[i] + vec[n-i-1] for the first half of the vector.
* Update sum with the maximum twin sum found.
* Return the final maximum twin sum.

# Complexity
* Time complexity: O(n)
* Space complexity: O(n)

# Code
```
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
    int pairSum(ListNode* head) {
        
        int sum = 0;
        vector<int> vec;

        while(head != nullptr)
        {
            vec.push_back(head->val);
            head = head -> next;
        }

        int n = vec.size();

        for(int i=0; i< n/2; i++)
        {
            sum = max(sum, vec[i] + vec[n-i-1]);
        }

        return sum;
    }
};
```
