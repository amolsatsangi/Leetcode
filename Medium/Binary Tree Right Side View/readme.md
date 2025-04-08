# LeetCode Problem - Binary Tree Right Side View

**Link to the problem:** [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)

## Intuition
To get the right side view of a binary tree, we need to capture the last node visible at each level when the tree is viewed from the right side.

## Approach

### Recursive DFS Approach
- Traverse the tree using modified preorder (root → right → left).
- Track the current level, and add the first node encountered at each level to the result.
- This ensures the rightmost node at each level is captured first.

### BFS Level Order Approach
- Traverse the tree level by level using a queue.
- For each level, capture the last node (i.e., the rightmost node) and add it to the result.
- Enqueue child nodes from left to right to maintain level structure.

## Complexity

### Recursive DFS
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree.
- **Space complexity:** \(O(h)\), where \(h\) is the height of the tree (due to recursion stack).

### BFS Level Order
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes in the tree.
- **Space complexity:** \(O(w)\), where \(w\) is the maximum width of the tree (queue size at the widest level).
