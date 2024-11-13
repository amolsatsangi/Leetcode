# Binary Tree Preorder Traversal

**Link to the problem:** [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/description/)

## Intuition
To solve this problem, the simplest approach is to use the preorder traversal method directly, where we visit the root node first, then recursively visit the left subtree, followed by the right subtree.

## Approach
1. Start from the root node. If it's `null`, return an empty list.
2. Visit the current node and store its value.
3. Recursively traverse the left subtree, then the right subtree, appending values to the list as we go.
4. Return the list of values in preorder order.

## Complexity
- **Time complexity:** O(n), where n is the number of nodes, since each node is visited exactly once.
- **Space complexity:** O(n), due to the recursive call stack in the worst case (unbalanced tree).
