# Climbing Stairs

**Link to the problem:** [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/description/)

## Intuition
The problem can be visualized as finding the number of ways to reach the `n-th` step, where each step depends on the previous two steps. This aligns with the Fibonacci sequence, where each number is the sum of the two preceding ones.

## Approach
To solve this problem:
- Use two variables to represent the number of ways to reach the last two steps (`f` for step `n-2` and `s` for step `n-1`).
- Iterate from the 3rd step to the `n-th` step, updating the number of ways to reach the current step as the sum of the previous two.
- This iterative approach ensures constant space usage and avoids redundant calculations.

## Complexity
- **Time complexity:**  O(n) 
  Iterates through the steps from 3 to `n`.

- **Space complexity:** O(1) 
  Uses only a few variables for computation without extra data structures.
