# Concatenation of Array

[LeetCode Problem Link](https://leetcode.com/problems/concatenation-of-array/)

## Problem Statement

Given an integer array `nums` of length `n`, you want to create an array `ans` of length `2n` where `ans[i] == nums[i % n]` for `0 <= i < 2n`.

Specifically, `ans` is formed by concatenating `nums` with itself.

## Example

### Input
nums = [1, 2, 1]
### Output
ans = [1, 2, 1, 1, 2, 1]

## Constraints

- `n == nums.length`
- `1 <= n <= 1000`
- `1 <= nums[i] <= 1000`
