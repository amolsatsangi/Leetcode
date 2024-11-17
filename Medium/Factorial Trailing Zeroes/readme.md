# Factorial Trailing Zeroes

**Link to the problem:** [Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/)

## Intuition
The number of trailing zeroes in a factorial is determined by the number of `10`s in its factorization, which is equivalent to counting pairs of `2`s and `5`s. Since there are always more `2`s than `5`s, the task reduces to counting the number of `5`s in the factorization of numbers from `1` to `n`.

## Approach
To count the number of `5`s:
1. Iterate over multiples of `5` up to `n`.
2. For each multiple, add the integer division of `n` by the current multiple to the count of `5`s.

This ensures that higher powers of `5` (like `25`, `125`, etc.) are also included.

## Complexity
- **Time complexity:**  O(log n) 
  The loop runs logarithmically with respect to `n` due to the multiplication factor of `5`.

- **Space complexity:**  O(1) 
  Only a constant amount of extra space is used.
