# Count Pairs Whose Sum is Less Than Target

**Problem Link**: [Count Pairs Whose Sum is Less Than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/)

## Problem Description:

You are given a **0-indexed** integer array `nums` of length `n` and an integer `target`.

Your task is to find the number of pairs `(i, j)` where `0 <= i < j < n` and `nums[i] + nums[j] < target`.

### Example 1:

**Input**: 
```
nums = [-1,1,2,3,1], target = 2
```
**Output**:
```
3
```
**Explanation**: 
There are 3 pairs of indices that satisfy the condition:
- (0, 1): nums[0] + nums[1] = -1 + 1 = 0, which is less than 2.
- (0, 2): nums[0] + nums[2] = -1 + 2 = 1, which is less than 2.
- (0, 4): nums[0] + nums[4] = -1 + 1 = 0, which is less than 2.

### Example 2:

**Input**: 
```
nums = [-6,2,5,-2,-7,-1,3], target = -2
```
**Output**: 
```
10
```
**Explanation**: 
There are 10 pairs of indices that satisfy the condition:
- (0, 3): nums[0] + nums[3] = -6 + -2 = -8, which is less than -2.
- (0, 4): nums[0] + nums[4] = -6 + -7 = -13, which is less than -2.
- (0, 5): nums[0] + nums[5] = -6 + -1 = -7, which is less than -2.
- (0, 6): nums[0] + nums[6] = -6 + 3 = -3, which is less than -2.
- (1, 4): nums[1] + nums[4] = 2 + -7 = -5, which is less than -2.
- (2, 3): nums[2] + nums[3] = 5 + -2 = 3, which is less than -2.
- (2, 4): nums[2] + nums[4] = 5 + -7 = -2, which is less than -2.
- (3, 4): nums[3] + nums[4] = -2 + -7 = -9, which is less than -2.
- (4, 5): nums[4] + nums[5] = -7 + -1 = -8, which is less than -2.
- (4, 6): nums[4] + nums[6] = -7 + 3 = -4, which is less than -2.

### Constraints:

- `n == nums.length`
- `2 <= n <= 100`
- `-100 <= nums[i] <= 100`
- `-200 <= target <= 200`
