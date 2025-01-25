# LeetCode Problem - Rotate Image

**Link to the problem:** [Rotate Image](https://leetcode.com/problems/rotate-image/description/)

## Intuition
The key observation is that rotating a matrix 90 degrees clockwise can be achieved in two steps:
1. Transpose the matrix (convert rows to columns).
2. Reverse each row of the transposed matrix.

This transforms the matrix efficiently without requiring extra space.

## Approach
1. Transpose the matrix by swapping `matrix[i][j]` with `matrix[j][i]` for all `i < j`.
2. Reverse each row of the transposed matrix to achieve the rotation.

## Complexity
- **Time complexity:** \( O(n^2) \), where \( n \) is the size of the matrix. Both the transpose and reverse operations process all elements of the matrix.
- **Space complexity:** \( O(1) \), as the rotation is performed in place without requiring additional storage.
