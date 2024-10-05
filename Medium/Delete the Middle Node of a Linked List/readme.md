# Intuition

The middle node in a linked list can be found by using two pointers: 
- One pointer (`p`) moves one node at a time.
- Another pointer (`q`) moves two nodes at a time.

By the time the faster pointer (`q`) reaches the end of the list, the slower pointer (`p`) will be at or just before the middle of the list. This allows us to easily remove the middle node by adjusting the next pointer of `p`.

# Approach

1. **Edge Case**: 
   - If the list has only one node (i.e., `head->next == nullptr`), return `nullptr`, as removing the middle node leaves the list empty.
   
2. **Two-Pointer Technique**:
   - Initialize two pointers, `p` and `q`, both starting at the head of the list.
   - Move `p` one step and `q` two steps in each iteration of the loop.
   - When `q` reaches the end or the last node, `p` will be just before the middle node.
   
3. **Removing the Middle Node**:
   - Once `p` is at the node before the middle, adjust its next pointer to skip the middle node (`p->next = p->next->next`).

4. **Return the Modified List**: 
   - Return the head of the list with the middle node deleted.

# Complexity

- **Time complexity**: 
  - O(N), where N is the number of nodes in the linked list. We traverse the list only once to find and remove the middle node.

- **Space complexity**: 
  - O(1), as only a constant amount of extra space is used (for the two pointers `p` and `q`).
