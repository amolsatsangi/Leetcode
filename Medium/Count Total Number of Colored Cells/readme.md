# LeetCode Problem - Count Total Number of Colored Cells

**Link to the problem:** [Count Total Number of Colored Cells](https://leetcode.com/problems/count-total-number-of-colored-cells/description/)

## Intuition
The pattern of colored cells follows a symmetrical expansion, forming a growing diamond shape. Observing the pattern reveals a mathematical formula for direct computation.

## Approach
- Identify the total number of cells based on the given `n` value.  
- The total count follows the formula: `n^2 + (n-1)^2`, where `n^2` accounts for the central expansion and `(n-1)^2` accounts for the previous layer.

## Complexity
- **Time complexity:** \(O(1)\), as the solution directly computes the result using a mathematical formula.  
- **Space complexity:** \(O(1)\), since no extra space is used apart from variables.  
