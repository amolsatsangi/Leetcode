# LeetCode Problem - Validate Binary Search Tree

**Link to the problem:** [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/)

## Intuition
To determine if a binary tree is a valid BST, we need to ensure that every node follows the BST property:  
- The left subtree contains only nodes with values **less** than the current node.  
- The right subtree contains only nodes with values **greater** than the current node.  
- Both left and right subtrees must also be valid BSTs.  

## Approach
- Use a recursive function to validate each node by maintaining a valid range (`left`, `right`).  
- The root node starts with an extended range (`-∞, +∞`) i.e.  (-2147483650, 2147483650)
- As we traverse down, update the range constraints:
  - The left subtree should have values within `(left, root->val)`.  
  - The right subtree should have values within `(root->val, right)`.  
- If any node violates the range, return `false`. Otherwise, recursively check the left and right subtrees.  

## Complexity
- **Time complexity:** O(n), where n is the number of nodes, as each node is visited once.  
- **Space complexity:** O(h), where h is the height of the tree, due to recursive stack space. In the worst case (skewed tree), \(h = O(n)\); in a balanced tree, (h = O(log n)).  
