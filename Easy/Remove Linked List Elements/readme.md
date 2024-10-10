# Intuition
The problem is to remove all elements from a linked list that have a specific value. The idea is to traverse the list and skip over the nodes that contain the target value, adjusting the pointers to "unlink" the nodes that need to be removed. Special attention is needed when the node to be removed is the head of the list.

# Approach
1. **Base Case**: If the head is `nullptr`, return `nullptr` as the list is empty.
2. **Handle Single Node List**: If the list has only one node (i.e., `head->next == nullptr`), check if the node's value matches the target `val`. If it matches, return `nullptr`; otherwise, return the node itself.
3. **Skip Target Nodes at the Head**: Use a while loop to move the head to the next node if the current head's value equals `val`.
4. **Traverse the List**: Use two pointers `p` and `q`. `p` points to the current node and `q` points to the next node (`p->next`). If `q`'s value is equal to `val`, set `p->next = q->next` to "unlink" `q`. Otherwise, advance both pointers.
5. Continue traversing the list until `q` becomes `nullptr`.
6. Return the modified head of the list.

# Complexity
- **Time complexity**: O(n) where `n` is the number of nodes in the linked list. We need to traverse the entire list once.
- **Space complexity**: O(1), as we are using only a fixed amount of extra space for pointers `p` and `q`.
