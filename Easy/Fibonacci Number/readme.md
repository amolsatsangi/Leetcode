# Fibonacci Number

**Problem Link:** [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/description/)

## Intuition
The Fibonacci sequence is defined recursively, where each number is the sum of the two preceding ones. This property can be leveraged for both iterative and recursive solutions.

## Approach

### Solution 1: Iterative
- Use two variables to track the previous two Fibonacci numbers (`f0` and `f1`) and compute the next one in a loop.
- Base cases (`n = 0` or `n = 1`) are handled separately.

### Solution 2: Recursive
- Implement the Fibonacci function recursively by adding results of `fib(n-1)` and `fib(n-2)`.
- Base cases are explicitly returned.

## Complexity

### Solution 1: Iterative
- **Time complexity:** \(O(n)\) (single loop iterates through the range \(n\)).
- **Space complexity:** \(O(1)\) (constant space for variables).

### Solution 2: Recursive
- **Time complexity:** \(O(2^n)\) (due to repeated subproblems in the recursion tree).
- **Space complexity:** \(O(n)\) (stack space for recursive calls).
