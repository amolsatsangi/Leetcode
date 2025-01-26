# LeetCode Problem - Find Missing and Repeated Values

**Link to the problem:** [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/)

## Intuition
To find the missing and repeated values in a grid, the key idea is to leverage mathematical properties such as sums and squared sums or use a hashing approach to count occurrences of each number.

## Approach
1. **Mathematical Approach:**  
   - Calculate the expected sum (`Sn`) and expected squared sum (`S2n`) of all integers from 1 to `n^2`, where `n` is the size of the grid.  
   - Compute the actual sum (`Sg`) and squared sum (`S2g`) from the grid.  
   - Derive the missing and repeated values using equations based on the differences between expected and actual sums.  

2. **Hashing Approach:**  
   - Use a frequency array to count occurrences of each number in the grid.  
   - Identify the repeated number (frequency 2) and the missing number (frequency 0) from the array.

## Complexity
- **Time Complexity:**  
  - Mathematical Approach: \(O(n^2)\) (Iterating through the grid once).  
  - Hashing Approach: \(O(n^2)\) (Counting and iterating through the grid).

- **Space Complexity:**  
  - Mathematical Approach: \(O(1)\) (Constant space for variables).  
  - Hashing Approach: \(O(n^2)\) (For the frequency array).
