# Same Tree

**Problem Link:** [Same Tree](https://leetcode.com/problems/same-tree/description/)

## Intuition
The problem requires checking if two binary trees are identical, meaning each corresponding node in the two trees has the same value, and the structure of both trees is identical. The solution involves a recursive approach, comparing nodes in both trees simultaneously.

## Approach
- Start by checking the root nodes of both trees (`p` and `q`).
- If both nodes are `nullptr`, they are identical, so return `true`.
- If only one of the nodes is `nullptr`, return `false` as the structure is not the same.
- If both nodes are not `nullptr`, compare their values. If values are equal, recursively check their left and right children.
- If all corresponding nodes and structures match, the trees are the same; otherwise, they are not.

## Complexity
- **Time complexity:** O(N), where N is the number of nodes in the smaller tree, as each node is visited once.
- **Space complexity:** O(H), where H is the height of the tree, due to the recursion stack.
