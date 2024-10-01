# Palindrome Number

[Problem Link](https://leetcode.com/problems/palindrome-number/description/)

## Problem Description:
Given an integer `x`, return `true` if `x` is a palindrome integer.

- An integer is a palindrome when it reads the same forward and backward.
- For example, `121` is a palindrome while `123` is not.

## Example 1:
```text
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```
## Example 2:
```text
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```
## Example 3:
```text
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```
## Constraints:
- -2^31 <= x <= 2^31 - 1
