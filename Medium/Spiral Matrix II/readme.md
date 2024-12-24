# Spiral Matrix II

**Link to the problem:** [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/description/)

## Intuition
The problem requires filling a matrix in a spiral order, starting from the top-left corner and proceeding layer by layer. My first thought was to divide the matrix into four boundaries (top, bottom, left, and right) and systematically adjust them while filling the values.

## Approach
1. Initialize a 2D matrix of size `n x n` with zeros.
2. Use four boundary variables (`top`, `bottom`, `left`, `right`) to define the current layer of the matrix to be filled.
3. Use a counter `k` to track the current number to be filled.
4. Iterate through the boundaries in spiral order:
   - Fill the top row from left to right.
   - Fill the right column from top to bottom.
   - Fill the bottom row from right to left (if applicable).
   - Fill the left column from bottom to top (if applicable).
5. Adjust the boundaries after each step and continue until the matrix is completely filled.

## Complexity
- **Time complexity:** O(n²)  
  The matrix contains `n²` elements, and each element is visited exactly once.
  
- **Space complexity:** O(n²)  
  The space is required to store the `n x n` matrix.
