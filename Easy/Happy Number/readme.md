# LeetCode Problem - Happy Number

**Link to the problem:** [Happy Number](https://leetcode.com/problems/happy-number/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
The problem requires checking whether a number eventually reaches 1 when repeatedly replacing it with the sum of the squares of its digits. Observing the behavior of numbers, we can see that if a number is not "happy," it eventually forms a cycle. This insight leads to using a hash map to detect cycles.

## Approach
1. Define a helper function `new_n()` to compute the sum of the squares of digits of a number.
2. Use an unordered map to track numbers that have been processed to detect cycles.
3. Start with the given number `n` and iteratively replace it with the result of `new_n()`.
4. If `n` becomes 1, return `true`. If a cycle is detected (a number repeats in the map), return `false`.

## Complexity
- **Time complexity:** O(log(n)) per number processed, where `n` is the input number. The total depends on the range of numbers encountered before detecting a cycle or reaching 1.
- **Space complexity:** O(k), where `k` is the number of unique numbers processed before a cycle or reaching 1.
