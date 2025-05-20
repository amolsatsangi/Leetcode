# Intuition
The problem requires traversing an N-ary tree in preorder fashion. In preorder traversal, we first visit the root, then recursively visit all the children from left to right.

# Approach
I used a recursive approach:
1. First, check if the root is null. If so, return an empty vector.
2. Create a helper function `pre_order` that does the actual traversal.
3. In the helper function:
   - Add the current node's value to our result vector (using `vec.push_back(root->val)`)
   - Iterate through all children of the node using a for loop and recursively call the helper function on each child
4. Return the final result vector

# Complexity
- Time complexity: O(n)
  - Each node is visited exactly once, where n is the number of nodes in the tree

- Space complexity: O(h)
  - Where h is the height of the tree due to the recursion stack
  - In the worst case (skewed tree), it could be O(n)
