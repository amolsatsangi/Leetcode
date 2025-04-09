# Maximum Width of Binary Tree

**Link to the problem:** [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/description/)

## Intuition
To determine the maximum width of a binary tree, we need to track the position of each node at every level, even when nodes are missing in between. Assigning a virtual index to each node helps maintain relative positions and calculate width correctly.

## Approach
We perform a level-order traversal (BFS) while tracking the index of each node in a complete binary tree layout. For each level, we record the indices of the first and last nodes, and compute the width as `last - first + 1`. To avoid overflow, we normalize indices at each level by subtracting the minimum index of the level.

## Complexity
- **Time complexity:** O(n), where n is the number of nodes in the tree, as each node is visited once.
- **Space complexity:** O(n), due to the queue used for level-order traversal.
