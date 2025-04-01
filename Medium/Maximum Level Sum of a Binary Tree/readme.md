# LeetCode Problem - Maximum Level Sum of a Binary Tree

**Link to the problem:** [Maximum Level Sum of a Binary Tree](http://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/)

## Intuition
To find the level with the maximum sum in a binary tree, we can traverse the tree level by level while keeping track of the sum at each level.  

## Approach
- Use a queue to perform a level-order traversal (BFS).  
- At each level, compute the sum of all node values.  
- Keep track of the maximum level sum and update the answer whenever a larger sum is found.  

## Complexity
- **Time complexity:** \(O(N)\), where \(N\) is the number of nodes in the tree, as each node is visited once.  
- **Space complexity:** \(O(W)\), where \(W\) is the maximum width of the tree, due to queue storage.  
