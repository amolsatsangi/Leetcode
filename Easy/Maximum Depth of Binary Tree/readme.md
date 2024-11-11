# Maximum Depth of Binary Tree

**Link to the problem:** [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)

## Intuition
The problem requires finding the maximum depth of a binary tree. My initial thought was to traverse each node and determine the depth of its left and right subtrees recursively.

## Approach
I used a recursive approach to solve this problem:
1. If the current node is `nullptr`, return `0` as it represents an empty subtree.
2. For each node, recursively calculate the maximum depth of its left and right children.
3. The maximum depth at the current node is the maximum of the depths of its left and right subtrees, plus `1` for the current node.

## Complexity
- **Time complexity:** \(O(N)\), where \(N\) is the number of nodes in the tree, as we visit each node once.
- **Space complexity:** \(O(H)\), where \(H\) is the height of the tree, due to the recursion stack.
