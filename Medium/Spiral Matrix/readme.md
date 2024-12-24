# LeetCode Problem - Spiral Matrix

**Link to the problem:** [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
The problem requires traversing a matrix in a spiral order. The idea is to break the traversal into four distinct directions (left-to-right, top-to-bottom, right-to-left, and bottom-to-top) and systematically shrink the boundaries of the matrix as elements are added to the result.

## Approach
1. Define four boundaries: `top`, `bottom`, `left`, and `right`.
2. Traverse the matrix in four directions:
   - Left-to-right along the `top` boundary.
   - Top-to-bottom along the `right` boundary.
   - Right-to-left along the `bottom` boundary (if still valid).
   - Bottom-to-top along the `left` boundary (if still valid).
3. After each directional traversal, adjust the corresponding boundary inward.
4. Repeat the process until all boundaries overlap or are traversed.

## Complexity
- **Time complexity:** O(m × n), where `m` is the number of rows and `n` is the number of columns. Each element is visited exactly once.
- **Space complexity:** O(1) (excluding the output array), as we only use a fixed number of variables for tracking boundaries.
