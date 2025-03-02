# LeetCode Problem - Set Matrix Zeroes

**Link to the problem:** [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/?envType=study-plan-v2&envId=programming-skills)

## Intuition
The goal is to set entire rows and columns to zero if any element in the matrix is zero. Instead of modifying the matrix during iteration, we first identify all rows and columns that should be zeroed and then update the matrix accordingly.  

## Approach
- Use two sets to track the rows and columns that contain zeroes.  
- Traverse the matrix to find zeroes and store their row and column indices in the sets.  
- Iterate through the stored row indices and set all elements in those rows to zero.  
- Iterate through the stored column indices and set all elements in those columns to zero.  

## Complexity
- **Time complexity:** (O(m * n), where \(m\) is the number of rows and \(n\) is the number of columns, since we traverse the matrix twice.  
- **Space complexity:** (O(m + n), due to the extra space used for storing row and column indices in sets.  
