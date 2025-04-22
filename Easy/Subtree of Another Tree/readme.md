# LeetCode Problem - Subtree of Another Tree

**Link to the problem:** [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/)

## Intuition
To determine if one tree is a subtree of another, the idea is to check every node in the main tree and see if there's a match with the given subtree. If we find a node in the main tree that matches the root of the subtree, we can then compare the entire structure of both trees from that point onward.

## Approach
1. Traverse the main tree (`root`) using recursion.
2. At each node, check if the subtree rooted at the current node is identical to `subRoot`.
3. If not, recursively check the left and right subtrees.
4. To check if two trees are identical, compare their root values and recursively check both left and right children.

## Complexity
- **Time complexity:** O(m * n)  
  Where `m` is the number of nodes in the main tree and `n` is the number of nodes in the subtree. In the worst case, for each node in the main tree, we may compare up to all nodes in the subtree.

- **Space complexity:** O(h)  
  Where `h` is the height of the main tree, due to recursive call stack usage.
