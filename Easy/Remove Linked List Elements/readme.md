# Remove Linked List Elements

**Problem Link:** [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)

## Intuition
The task is to remove nodes with a specific value `val` from a linked list. We traverse the list and adjust the `next` pointers to skip over nodes containing the target value, ensuring the list remains connected.

## Approach
1. **Initial Head Check:**  
   If the head node contains `val`, move the head to the next node until a valid head is found (or the list becomes empty).
   
2. **Traversing the List:**  
   Use two pointers:  
   - `p` tracks the current node  
   - `q` tracks the next node (`p->next`)  
   If `q->val == val`, adjust `p->next` to skip `q` and link to `q->next`. Continue until all nodes are processed.

3. **Termination:**  
   The traversal ends when `q` is `nullptr`, and the modified list with all instances of `val` removed is returned.

## Complexity
- **Time Complexity:** O(n)  
   We traverse the entire list once, where `n` is the number of nodes.

- **Space Complexity:** O(1)  
   Only a constant amount of extra space is used (for the two pointers).
