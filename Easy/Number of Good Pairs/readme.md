# Number of Good Pairs

## Problem Link
You can view the problem on LeetCode here: [Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/)

## Description

This repository contains a solution to the "Number of Good Pairs" problem from LeetCode.

### Problem Statement

Given an array of integers `nums`, you need to find the number of good pairs `(i, j)` where:

- `0 <= i < j < nums.length`
- `nums[i] == nums[j]`

A pair `(i, j)` is called good if `nums[i] == nums[j]` && i<j

### Example

For example, if `nums = [1, 2, 3, 1, 1, 3]`, the number of good pairs would be:

- Pairs with value `1`: `(0, 3)`, `(0, 4)`, `(3, 4)`, so there are 4 pairs.
- Pairs with value `3`: `(2, 5)`, so there is 1 pair.

The total number of good pairs is `4 + 1 = 5`.

### Input

- `nums`: A list of integers.

### Output

- An integer representing the number of good pairs.
