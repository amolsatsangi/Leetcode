# LeetCode Problem - Missing Number

**Link to the problem:** [Missing Number](https://leetcode.com/problems/missing-number/submissions/1477921585/)

## Intuition
The problem involves finding the missing number in a sequence from `0` to `n`. Observing that either XOR properties or the formula for the sum of the first `n` natural numbers can help identify the missing number efficiently.

## Approach

### XOR Method:
- XOR all elements in the array (`xor_num1`) and XOR all indices (`xor_num2`) from `0` to `n`.
- The missing number is obtained by XORing `xor_num1`, `xor_num2`, and the last index (`nums.size()`).

### Sum Formula Method:
- Calculate the total sum of numbers from `0` to `n` using the formula `n * (n + 1) / 2`.
- Subtract the sum of the array elements from the total sum to find the missing number.

## Complexity
- **Time complexity:** `O(n)` for both methods (single loop over the array).
- **Space complexity:** `O(1)` for both methods (constant space usage).
