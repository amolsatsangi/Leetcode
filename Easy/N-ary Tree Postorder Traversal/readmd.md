# N-ary Tree Postorder Traversal

## Intuition
The postorder traversal of a tree visits all the children of a node before visiting the node itself. For N-ary trees, this means processing all child subtrees from left to right before processing the current node.

## Approach
I implemented a recursive solution that:
1. Base case: If the root is null, return immediately
2. Recursively traverse each child subtree in order
3. Add the current node's value to the result vector after all children have been processed
4. Handle the empty tree case separately in the main function

## Complexity
- Time complexity: $$O(n)$$ where n is the number of nodes, as each node is processed exactly once
- Space complexity: $$O(h)$$ where h is the height of the tree due to the recursive call stack, which in worst case could be $$O(n)$$ for a skewed tree
