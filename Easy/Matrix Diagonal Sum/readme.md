# LeetCode Problem - Matrix Diagonal Sum

**Link to the problem:** [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/?envType=study-plan-v2&envId=programming-skills)

## Intuition
The problem requires calculating the sum of the primary and secondary diagonals of a square matrix. The key observation is that elements along these diagonals have specific indices:  
- The primary diagonal consists of elements where `i == j`.  
- The secondary diagonal consists of elements where `i + j == n - 1`.  
- If the matrix has an odd size, the center element is counted twice, so it should be subtracted once.

## Approach
### Solution 1:
- Use nested loops to traverse the matrix and sum elements belonging to either the primary or secondary diagonal.  

### Solution 2:
- Iterate through the matrix using a single loop.  
- Directly add the primary diagonal element at `mat[i][i]`.  
- Add the secondary diagonal elements while ensuring the center element is not counted twice.

## Complexity
- **Time complexity:** \(O(n^2)\) for Solution 1, \(O(n)\) for Solution 2.  
- **Space complexity:** \(O(1)\) for both solutions, as only a few extra variables are used.  
