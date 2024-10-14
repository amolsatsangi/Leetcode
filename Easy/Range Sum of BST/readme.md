# LeetCode Problem - Range Sum of BST

## Intuition
The idea behind solving this problem is to utilize the property of Binary Search Trees (BST), where the left child of a node contains values less than the node, and the right child contains values greater than the node. An inorder traversal of the tree will naturally visit the nodes in sorted order. The key is to traverse only the necessary parts of the tree that fall within the range [low, high] and accumulate the sum.

## Approach
1. Use a helper function `inorder` to traverse the tree.
2. At each node, if the value is greater than or equal to `low`, traverse the left subtree.
3. If the node’s value is within the range [low, high], add its value to the sum.
4. If the value is less than or equal to `high`, traverse the right subtree.
5. Continue this process recursively until all relevant nodes have been visited.

## Complexity

- **Time complexity:** O(N), where N is the number of nodes in the tree. In the worst case, we visit all the nodes in the tree.

- **Space complexity:** O(H), where H is the height of the tree. This is the space used by the recursive call stack.
