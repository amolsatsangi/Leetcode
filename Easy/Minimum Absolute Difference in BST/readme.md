# LeetCode Problem - Minimum Absolute Difference in BST

**Link to the problem:** [Minimum Absolute Difference in BST](https://leetcode.com/problems/minimum-absolute-difference-in-bst/)

## Intuition
Since the absolute difference between any two nodes in a BST is minimized for consecutive values in an inorder traversal, we can leverage this property to find the minimum absolute difference efficiently.  

## Approach
- Perform an inorder traversal of the BST to collect node values in a sorted array.  
- Iterate through the array and compute the minimum difference between consecutive elements.  
- Return the smallest difference found.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of nodes, since we traverse the tree once.  
- **Space complexity:** \(O(n)\), due to storing the inorder traversal in a vector.  
