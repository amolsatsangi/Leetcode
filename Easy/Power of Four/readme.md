# LeetCode Problem - Power of Four

**Link to the problem:** [Power of Four](https://leetcode.com/problems/power-of-four/)

## Intuition
The problem can be solved by recursively dividing the given number `n` by 4, checking if it eventually becomes 1. If `n` is divisible by 4 at every step and reaches 1, it is a power of four.

## Approach
- Check for the base case: If `n == 1`, set a flag to `true`.
- If `n` is not divisible by 4 (and `n` is not 1), return `false`.
- Recursively call the function with `n / 4`.
- Use a global flag to track the result.

## Complexity
- **Time complexity:** O(log₄(n))  
  The number is divided by 4 at each step, reducing its size logarithmically.

- **Space complexity:** O(log₄(n))  
  This is due to the recursive call stack.
