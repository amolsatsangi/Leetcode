# LeetCode Problem - Minimum Depth of Binary Tree

**Link to the problem:** [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/description/)

## Intuition
The problem requires finding the minimum depth of a binary tree. The depth is defined as the shortest path from the root to a leaf node.  

## Approach
- If the root is `nullptr`, return `0`.  
- Recursively find the minimum depth of the left and right subtrees.  
- If one subtree is missing (`nullptr`), return the depth of the other subtree plus one.  
- If both subtrees exist, return the minimum of the two depths plus one.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes, as each node is visited once.  
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to recursive function calls.  
