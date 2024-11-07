# [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/)

## Intuition
The Binary Search Tree (BST) property allows us to make decisions at each node based on the value we’re searching for. Since each node’s left subtree only contains values smaller than the node’s value, and the right subtree only contains values greater, we can navigate efficiently to find the target value.

## Approach
1. Start at the root and check if the current node's value matches the target value (`val`).
2. If it matches, return the current node.
3. If the current node’s value is less than `val`, move to the right subtree (where values are larger).
4. If it’s greater, move to the left subtree (where values are smaller).
5. Repeat the process until the value is found or the subtree is empty.

## Complexity
- **Time complexity:** O(h), where `h` is the height of the tree (best case O(log n) for a balanced BST, worst case O(n) for a skewed tree).
- **Space complexity:** O(1), as we are not using extra space apart from the input.
