# LeetCode Problem - Binary Tree Maximum Path Sum

**Link to the problem:** [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)

## Intuition
The problem requires finding the maximum path sum in a binary tree. Since paths can start and end at any node, a recursive approach is ideal to compute the maximum sum while traversing the tree.

## Approach
- Use a helper function to calculate the height of each subtree while keeping track of the maximum path sum.  
- At each node, compute the sum of the left and right subtrees, considering only positive contributions.  
- Update the maximum path sum if the current node’s value plus both left and right subtree sums form a larger sum.  
- Return the maximum path sum including only one of the subtrees to ensure the path remains continuous.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, as each node is visited once.  
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to the recursive stack.  
