# LeetCode Problem - Sum of Square Numbers

**Link to the problem:** [Sum of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers/description/)

## Intuition
The problem requires checking if a number `c` can be expressed as the sum of squares of two integers. Observing properties of perfect squares and their sums gives two potential approaches:
1. Using a two-pointer technique.
2. Iterating through one number and checking if the second number is a perfect square.

## Approach

### Solution 1: Two-pointer Technique
- Initialize two pointers: one at `0` (start) and the other at `sqrt(c)` (end).
- Calculate the sum of squares at these pointers:
  - If the sum equals `c`, return `true`.
  - If the sum is greater than `c`, move the end pointer down.
  - If the sum is less than `c`, move the start pointer up.
- Continue until `start` exceeds `end`.

### Solution 2: Iterative with Square Root Check
- Iterate through potential values of one integer (`i`), starting from `0`.
- Compute the remaining value as `c - i*i` and check if its square root is an integer using the modulo operation.
- Return `true` if a valid pair is found.

## Complexity

- **Time Complexity:**
  - Solution 1: O(sqrt(c)) due to the two-pointer traversal.
  - Solution 2: O(sqrt(c) * log(c)) because of the square root check.

- **Space Complexity:**
  - Both solutions use \(O(1)\) additional space.
