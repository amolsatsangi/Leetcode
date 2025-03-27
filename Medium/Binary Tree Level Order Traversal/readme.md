# LeetCode Problem - Binary Tree Level Order Traversal

**Link to the problem:** [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)

## Intuition
The problem requires traversing a binary tree level by level. Since a queue naturally follows the First-In-First-Out (FIFO) principle, it is well-suited for this type of traversal.  

## Approach
- Use a queue to process nodes level by level.  
- Push the root node into the queue and iterate while the queue is not empty.  
- For each level, store node values in a temporary vector and enqueue their left and right children.  
- After processing each level, add the temporary vector to the result.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes, as each node is processed once.  
- **Space complexity:** \(O(n)\) in the worst case, when the last level of the tree has \(n/2\) nodes.  
