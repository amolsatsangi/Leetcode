# Delete Nodes From Linked List Present in Array
**LeetCode Problem Link:**
[Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/)
## Problem Description

You are given the **head** of a linked list and an integer array **nums**. The linked list nodes are **uniquely** valued, and the integer array **nums** is a subset of the linked list values.

Delete all the nodes from the linked list that are present in **nums**, and return the **head** of the modified linked list.

### Example 1:
```text
Input: head = [1,2,3,4], nums = [1,3] 
Output: [2,4] 
Explanation: The nodes with values 1 and 3 are removed from the linked list.
```

### Example 2:
```text
Input: head = [1,2,3,4,5], nums = [2,4]
Output: [1,3,5] E
Explanation: The nodes with values 2 and 4 are removed from the linked list.
```

## Constraints

- The number of nodes in the linked list is in the range `[1, 10^4]`.
- `1 <= Node.val <= 10^4`
- All the values in the linked list are **unique**.
- `1 <= nums.length <= 10^4`
- `nums` is a subset of linked list values.
