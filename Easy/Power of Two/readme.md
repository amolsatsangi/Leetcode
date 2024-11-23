# Power of Two

**Link to the problem:** [Power of Two](https://leetcode.com/problems/power-of-two/description/)

## Intuition
To determine if a number is a power of two, we observe that powers of two are positive integers that can be represented as `2^x` for some non-negative integer `x`. This means they have exactly one bit set in their binary representation.

## Approach

### Solution 1: Using Logarithms
- Check if the number `n` is greater than 0.
- Compute the base-2 logarithm of `n`. If the result is an integer, then `n` is a power of two.

### Solution 2: Iterative Multiplication
- Start with `1` and iteratively multiply it by `2` until the value either matches `n` (return `true`) or exceeds `n` (return `false`).

## Complexity

- **Time complexity:**
  - **Solution 1:** O(1) for logarithmic computation.
  - **Solution 2:** O(log(n)) for iterating through powers of two.

- **Space complexity:** O(1) for both solutions.
