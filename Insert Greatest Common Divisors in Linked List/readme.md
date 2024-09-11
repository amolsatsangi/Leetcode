# Insert Greatest Common Divisors in Linked List
**LeetCode Problem Link:**
[Insert Greatest Common Divisors in Linked List](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/)
## Problem Description

You are given the **head** of a linked list with **n** nodes. For each consecutive pair of nodes in the linked list, insert a new node with a value equal to the **greatest common divisor (GCD)** of the two nodes' values.

Return the head of the modified linked list.

### Example 1:
```text
Input: head = [18, 6, 10, 3]
Output: [18, 6, 6, 2, 10, 1, 3]
Explanation:
The GCD of 18 and 6 is 6.
The GCD of 6 and 10 is 2.
The GCD of 10 and 3 is 1.
```

### Example 2:
```text
Input: head = [7]
Output: [7]
Explanation: There are no consecutive nodes, so no new nodes are added.
```

## Constraints

- The number of nodes in the list is in the range `[1, 5000]`.
- `1 <= Node.val <= 1000`
- The GCD of two numbers `x` and `y` is the largest positive integer that divides both `x` and `y` without leaving a remainder.
