# Pascal's Triangle

**Link to the problem:** [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/description/)

## Intuition
To construct Pascal's Triangle, observe that each value is the sum of the two values directly above it in the previous row. The first and last elements of each row are always 1. This pattern provides a clear structure for iterating through rows.

## Approach
1. Start with the first row containing a single element, `1`.
2. For each subsequent row:
   - Use the values from the previous row to compute the current row.
   - Add the first and last elements as `1`, and compute the middle values as the sum of adjacent elements in the previous row.
3. Repeat this process until the desired number of rows is generated.

## Complexity
- **Time complexity:** O(n²)  
  Generating each row requires iterating through the previous row, and there are `n` rows to generate.

- **Space complexity:** O(n²)  
  The space required to store the triangle grows proportionally to the total number of elements in all rows.
