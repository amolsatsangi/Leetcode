# Maximum Twin Sum of a Linked List

**Problem Link:** [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/)

## Intuition
The problem requires finding the maximum sum of twin nodes in a linked list. Since the twin nodes are symmetrically positioned, reversing the second half of the list allows for direct pairwise summation.

## Approach
1. Use the fast and slow pointer technique to locate the middle of the linked list.
2. Reverse the second half of the list.
3. Iterate through both halves simultaneously to compute and track the maximum twin sum.
4. Return the maximum sum found.

## Complexity
- **Time Complexity:** O(N), where \(N\) is the number of nodes in the linked list (finding the middle, reversing the list, and computing twin sums all take linear time).
- **Space Complexity:** O(1), as the algorithm uses constant extra space.

