# LeetCode Problem - Maximum Product Difference Between Two Pairs

**Link to the problem:** [Maximum Product Difference Between Two Pairs](https://leetcode.com/problems/maximum-product-difference-between-two-pairs/)

## Intuition
The problem requires finding the maximum product difference between two pairs in the array. Instead of sorting, we can efficiently determine the two smallest and two largest numbers in a single pass.

## Approach
- Use four variables to track the smallest, second smallest, largest, and second largest elements while iterating through the array.  
- Compute the product difference using these values:  
  \[
  (max_1 * max_2) - (min_1 * min_2)
  \]

## Complexity
- **Time complexity:** \(O(n)\), since we traverse the array once.  
- **Space complexity:** \(O(1)\), as only a few variables are used.  
