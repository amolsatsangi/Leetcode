# LeetCode Problem - Can Make Arithmetic Progression From Sequence

**Link to the problem:** [Can Make Arithmetic Progression From Sequence](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/?envType=study-plan-v2&envId=programming-skills)

## Intuition
To determine whether an array can form an arithmetic progression, we need to check if the difference between consecutive elements remains constant after sorting.

## Approach
- Sort the array in ascending order.  
- Compute the common difference using the first two elements.  
- Iterate through the array and check if the difference between consecutive elements remains the same.  
- If any difference is inconsistent, return `false`; otherwise, return `true`.  

## Complexity
- **Time complexity:** O(n * log n), due to sorting.  
- **Space complexity:** O(1), as sorting is done in-place and no extra space is used.  
