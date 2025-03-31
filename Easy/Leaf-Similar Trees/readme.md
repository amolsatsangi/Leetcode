# LeetCode Problem - Leaf-Similar Trees

**Link to the problem:** [Leaf-Similar Trees](https://leetcode.com/problems/leaf-similar-trees/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires checking whether two trees have the same sequence of leaf values. Since only the leaf nodes matter, we can ignore the internal structure of the trees and focus on extracting and comparing their leaf sequences.

## Approach
- Perform a depth-first traversal (DFS) on both trees to collect their leaf values in separate lists.  
- Compare the two lists to determine if they are identical.  

## Complexity
- **Time complexity:** O(n + m), where n and m are the number of nodes in the two trees, as each node is visited once.  
- **Space complexity:** O(max(d_1, d_2)), where d_1 and d_2 are the depths of the two trees, due to recursive function calls in DFS.  
