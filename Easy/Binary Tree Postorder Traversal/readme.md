# Binary Tree Postorder Traversal

**Link to the problem:** [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/description/)

## Intuition
The problem requires traversing a binary tree in postorder, meaning we need to visit the left subtree, then the right subtree, and finally the root node. This traversal order suggests a recursive approach where each node processes its children before itself.

## Approach
To achieve postorder traversal, we recursively call the `postorderTraversal` function on the left child, then on the right child, and finally add the node's value to the result list. This ensures that each subtree is fully processed in postorder before the root node value is added.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, as each node is visited once.
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to the recursive call stack.
