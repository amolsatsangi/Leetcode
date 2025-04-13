# [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

## Intuition
To construct a binary tree, we can utilize the fact that:
- The first element in the preorder traversal is always the root.
- The position of the root in the inorder traversal splits the tree into left and right subtrees.

## Approach
1. Use a hash map to store the indices of values in the inorder traversal for constant-time lookups.
2. Start with the first element of the preorder array as the root.
3. Recursively build the left and right subtrees using the preorder and inorder indices.
4. The number of nodes in the left subtree is calculated by the root’s position in the inorder array.
5. Adjust the indices accordingly for recursive subtree construction.

## Complexity
- **Time complexity:** `O(n)`  
  Each node is visited once, and the hash map provides constant-time lookups.

- **Space complexity:** `O(n)`  
  For the hash map and recursion stack in the worst case.
