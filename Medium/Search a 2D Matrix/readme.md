# LeetCode Problem - Search a 2D Matrix

**Link to the problem:** [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

## Intuition
The matrix is sorted such that each row is sorted, and the first integer of each row is greater than the last integer of the previous row. This structure resembles a flattened sorted array. So, the search can be optimized using binary search techniques.

## Approach
We perform a binary search in two phases:
1. **Row Identification**: Use binary search on the first element of each row to find the possible row that could contain the target.
2. **Column Search**: Once the row is identified, perform binary search within that row to check if the target exists.

If the target lies outside the range of the matrix, we immediately return false.

## Complexity
- **Time complexity:** O(log m + log n), where `m` is the number of rows and `n` is the number of columns.
- **Space complexity:** O(1)
