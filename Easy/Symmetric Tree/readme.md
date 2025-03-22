# LeetCode Problem - Symmetric Tree

**Link to the problem:** [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)

## Intuition
A tree is symmetric if the left and right subtrees are mirror images of each other. This means that for every node in the left subtree, there should be a corresponding node in the right subtree with the same value, and their respective child nodes should also be mirrored.

## Approach
- Use a recursive helper function to compare the left and right subtrees.
- If both subtrees are `nullptr`, return `true`.
- If one is `nullptr` while the other is not, return `false`.
- If the values of the current nodes are different, return `false`.
- Recursively check if the left child of one subtree matches the right child of the other, and vice versa.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, since we traverse each node once.
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to recursive calls in the call stack.
