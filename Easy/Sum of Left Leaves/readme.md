# Sum of Left Leaves

**Link to the problem:** [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/submissions/1453484967/)

## Intuition
The goal is to calculate the sum of all left leaves in a binary tree. A straightforward approach is to traverse the tree recursively and check if the left child of the current node is a leaf. If it is, add its value to the sum.

## Approach
1. Perform a recursive traversal of the binary tree.
2. Check if the current node's left child is a leaf node (i.e., it has no left or right children).
3. If it is a leaf, add its value to a running sum.
4. Recursively process both left and right subtrees.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree, as we visit each node exactly once.
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to the recursive call stack.
