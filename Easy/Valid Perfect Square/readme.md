# Valid Perfect Square

**Problem Link:** [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)

## Intuition
The problem asks to determine whether a given number is a perfect square. My initial thought was to leverage mathematical functions to check if the square root of the number is an integer.

## Approach
1. Calculate the square root of the input number.
2. Use the `fmod` function to check if the square root has a fractional part.
3. Return `true` if there is no fractional part (i.e., it is a perfect square); otherwise, return `false`.

## Complexity
- **Time complexity:** \( O(1) \) (Computing the square root of a number is a constant-time operation.)
- **Space complexity:** \( O(1) \) (No additional space is used.)
