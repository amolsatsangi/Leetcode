# LeetCode Problem - Binary Tree Zigzag Level Order Traversal

**Link to the problem:** [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)

## Intuition
To perform a level order traversal, we can use a queue. To achieve the zigzag pattern, we alternate the order of inserting node values for each level.

## Approach
- Use a queue to perform a standard BFS traversal level by level.
- For each level, store node values in a temporary vector.
- Use a boolean flag to determine whether to insert values from left to right or right to left.
- Push children of the current node into the queue for the next level.
- After processing a level, toggle the flag to switch direction for the next level.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, since each node is visited once.
- **Space complexity:** \(O(n)\), for the queue and result storage.
