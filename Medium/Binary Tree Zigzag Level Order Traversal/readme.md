# LeetCode Problem - Binary Tree Zigzag Level Order Traversal

**Link to the problem:** [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

## Intuition
The problem requires traversing a binary tree level by level while alternating the order of elements at each level. A standard level-order traversal (BFS) can be modified to achieve this by reversing elements at alternate levels.

## Approach
- Use a queue to perform a level-order traversal of the tree.  
- Maintain a boolean flag to track whether the current level should be reversed.  
- At each level, process all nodes, adding their children to the queue for the next level.  
- If the flag is set, reverse the collected values for the level before adding them to the result.  
- Toggle the flag at the end of each level to alternate between normal and reversed order.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, since each node is processed once.  
- **Space complexity:** \(O(n)\) in the worst case due to storing nodes in the queue.  
