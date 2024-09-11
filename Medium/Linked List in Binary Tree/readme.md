# Linked List in Binary Tree
**LeetCode Problem Link:**
[Linked List in Binary Tree](https://leetcode.com/problems/linked-list-in-binary-tree/description/)
## Problem Description

Given the **root** of a binary tree and a **head** of a linked list, return `true` if and only if there is a path in the binary tree that forms the same sequence as the linked list.

### Example 1:
```text
Input: root = [1,2,3], head = [1,2]
Output: true
Explanation: The path 1 -> 2 matches the linked list.
```

### Example 2:

```text
Input: root = [1,2,3], head = [1,3]
Output: false
Explanation: The path 1 -> 3 does not match the linked list.
```

### Example 3:
```text
Input: root = [1,2,3], head = [1,4]
Output: false
Explanation: The path 1 -> 4 does not exist.
```

## Constraints

- The number of nodes in the binary tree is in the range `[1, 1000]`.
- The number of nodes in the linked list is in the range `[1, 1000]`.
- `1 <= Node.val, ListNode.val <= 1000`
