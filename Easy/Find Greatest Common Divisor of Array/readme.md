# Find Greatest Common Divisor of Array

**Problem Link:** [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/)

## Intuition
The problem involves finding the greatest common divisor (GCD) of the largest and smallest elements in the array. Since GCD is a fundamental mathematical operation, it suggests the use of efficient algorithms like the Euclidean algorithm for this purpose.

## Approach
1. Traverse the array to identify the maximum and minimum elements.
2. Use the Euclidean algorithm to compute the GCD of the maximum and minimum values. This algorithm efficiently reduces the problem by repeatedly taking the modulus of the two numbers.

## Complexity
- **Time complexity:** O(n + log(minimum value)), where n is the size of the array and log(minimum value) accounts for the GCD computation.
- **Space complexity:** O(1), as no extra space is used.
