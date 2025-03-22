# LeetCode Problem - Diameter of Binary Tree

**Link to the problem:** [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/description/)

## Intuition
The diameter of a binary tree is the length of the longest path between any two nodes. This path may or may not pass through the root. The key observation is that the diameter of a tree is the sum of the heights of its left and right subtrees for some node.

## Approach
- Use a recursive function to calculate the height of each subtree.  
- Maintain a variable to store the maximum diameter encountered during traversal.  
- At each node, update the diameter as the sum of the left and right subtree heights.  
- Return the maximum height of the left or right subtree plus one.  

## Complexity
- **Time complexity:** \(O(n)\), as each node is visited once.  
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree due to recursive calls in the call stack.  
