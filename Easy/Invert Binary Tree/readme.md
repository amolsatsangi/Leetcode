# LeetCode Problem - Invert Binary Tree

**Link to the problem:** [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

## Intuition
The problem requires swapping the left and right subtrees of every node in the given binary tree. This can be achieved using a recursive approach to traverse the tree and swap nodes at each level.

## Approach
- Use recursion to traverse the tree.  
- Swap the left and right child nodes of the current node.  
- Recursively call the function for the left and right subtrees.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, as each node is visited once.  
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to recursive function calls. In the worst case (skewed tree), this could be \(O(n)\); in the best case (balanced tree), it is \(O(\log n)\).  
