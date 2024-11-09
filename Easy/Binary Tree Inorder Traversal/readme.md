# Binary Tree Inorder Traversal

**Link to the problem:** [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/1447876842/)

## Intuition
The inorder traversal of a binary tree visits nodes in a specific order: left subtree, root node, and then the right subtree. This problem can be solved using a recursive approach to traverse and collect node values in this order.

## Approach
1. Start at the root node and traverse the left subtree first.
2. After reaching a leftmost node (or if the left subtree is `nullptr`), add the node’s value to the result vector.
3. Continue to the right subtree and repeat the process.
4. Return the vector containing values in inorder sequence.

## Complexity
- **Time complexity:** O(n), where `n` is the number of nodes, since we visit each node once.
- **Space complexity:** O(n), accounting for the recursive call stack in the worst case (if the tree is highly unbalanced) or the storage for the result vector.
