# LeetCode Problem - Search a 2D Matrix II

**Link to the problem:** [Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)

## Intuition
The matrix is sorted in a way that each row is sorted from left to right, and the first integer of each row is greater than the last integer of the previous row. This suggests a binary search approach can be useful both across rows and within rows.

## Approach
1. Perform binary search on the first column to identify all rows that could potentially contain the target.
2. For each valid row (from row 0 to the last possible row), perform binary search within the row to find the target.
3. If the target is found in any of the valid rows, return true.
4. If not found in any, return false.

## Complexity
- **Time complexity:** O(log m + k log n), where `m` is the number of rows, `n` is the number of columns, and `k` is the number of rows searched.
- **Space complexity:** O(1)
