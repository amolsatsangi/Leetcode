# Product of Array Except Self

**Link to the problem:** [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
The goal is to calculate the product of all elements in the array except the current one without using division (except for zeros). The key insight is to handle zeros separately, as they affect the overall product differently than other numbers.

## Approach
1. **First Pass:** 
   - Calculate the total product of all non-zero elements.
   - Count the number of zeros in the array.
2. **Second Pass:**
   - If more than one zero exists, the result for all elements is `0`.
   - If exactly one zero exists, set the result for the zero element to the total product and others to `0`.
   - If no zeros exist, calculate the result by dividing the total product by the current element.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the size of the array, as we traverse the array twice.
- **Space complexity:** \(O(1)\), since no additional data structures are used beyond the input array.
