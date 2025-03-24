# LeetCode Problem - Path Sum

**Link to the problem:** [Path Sum](https://leetcode.com/problems/path-sum/)

## Intuition
The problem requires checking if there exists a root-to-leaf path in a binary tree where the sum of the node values equals `targetSum`. Since we need to explore different paths, a recursive approach naturally fits.  

## Approach
- If the root is `nullptr`, return `false`.  
- If the current node is a leaf and its value matches `targetSum`, return `true`.  
- Recursively check the left and right subtrees, reducing `targetSum` by the current node’s value.  
- Return `true` if either subtree has a valid path.  

## Complexity
- **Time complexity:** O(n), where n is the number of nodes in the tree, as each node is visited once.  
- **Space complexity:** O(h), where h is the height of the tree, due to the recursive call stack (worst case O(n) for a skewed tree and O(log n) for a balanced tree).  
