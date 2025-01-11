# Lucky Numbers in a Matrix

**Link to the problem:** [Lucky Numbers in a Matrix](https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/)

## Intuition
The problem requires identifying numbers that are the smallest in their row and the largest in their column. My initial thought was to iterate through each row to find the smallest number and verify if it is also the largest in its respective column.

## Approach
1. Iterate through each row of the matrix to find the smallest element in that row and record its column index.
2. For the identified column, check whether the smallest row element is the largest element in the column.
3. If the element satisfies both conditions, add it to the result list.
4. Return the result list containing all the "lucky numbers."

## Complexity
- **Time complexity:** O(m * n), where `m` is the number of rows and `n` is the number of columns. Each row and column is traversed once.
- **Space complexity:** O(1) (excluding the output list), as no additional data structures are used.
