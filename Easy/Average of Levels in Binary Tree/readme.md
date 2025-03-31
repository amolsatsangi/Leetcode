# LeetCode Problem - Average of Levels in Binary Tree

**Link to the problem:** [Average of Levels in Binary Tree](https://leetcode.com/problems/average-of-levels-in-binary-tree/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
To find the average value at each level of a binary tree, we can use a level-order traversal (BFS) to process all nodes at each level together.  

## Approach
- Use a queue to perform a level-order traversal.  
- At each level, compute the sum of node values and divide by the number of nodes to get the average.  
- Push child nodes into the queue to process the next level.  
- Store the averages in a result list and return it.  

## Complexity
- **Time complexity:** O(n), where \(n\) is the number of nodes in the tree, since each node is visited once.  
- **Space complexity:** O(m), where \(m\) is the maximum number of nodes at any level (worst-case scenario is O(n) for a skewed tree).  
