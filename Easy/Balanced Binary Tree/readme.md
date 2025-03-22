# LeetCode Problem - Balanced Binary Tree

**Link to the problem:** [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)

## Intuition
A tree is balanced if the height difference between its left and right subtrees is at most 1 for every node. Instead of checking the height separately for each node, we can compute it recursively while verifying the balance condition.

## Approach
- Use a recursive function to compute the height of the tree.  
- If a subtree is unbalanced, return `-1` immediately to avoid unnecessary calculations.  
- Compare the heights of the left and right subtrees to ensure the balance condition is met.  
- If all nodes satisfy the condition, return `true`; otherwise, return `false`.  

## Complexity
- **Time complexity:** \(O(n)\), since each node is visited once.  
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree, due to recursive calls on the call stack.  
