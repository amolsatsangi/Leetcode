# LeetCode Problem - Maximum Product of Two Elements in an Array

**Link to the problem:** [Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/)

## Intuition
The problem requires finding two distinct elements in the array that produce the maximum product after subtracting 1 from each. The goal is to efficiently identify these two elements and compute the result.  

## Approach
### Solution 1: Two-pass tracking of the two largest elements  
- Traverse the array while maintaining the largest and second-largest elements.  
- Compute the product using `(max1 - 1) * (max2 - 1)`.  

### Solution 2: Brute-force approach  
- Iterate through all possible pairs and compute their product.  
- Return the maximum product found.  

### Solution 3: Sorting approach  
- Sort the array in ascending order.  
- The maximum product will be formed by the last two elements.  

## Complexity
### Solution 1 (Two-pass tracking)
- **Time complexity:** \(O(n)\)  
- **Space complexity:** \(O(1)\)  

### Solution 2 (Brute-force)  
- **Time complexity:** \(O(n^2)\)  
- **Space complexity:** \(O(1)\)  

### Solution 3 (Sorting)  
- **Time complexity:** \(O(n  * log n)\)  
- **Space complexity:** \(O(1)\)  
