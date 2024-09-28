# LeetCode Problem: Minimum Element After Replacing with Digit Sum

**Problem Link**: [Minimum Element After Replacing with Digit Sum](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/)

## Problem Description:

You are given a 0-indexed array `nums` consisting of non-negative integers.

You can apply the following operation any number of times on each element of `nums`:

- Replace the element with the sum of its digits.

Note that you can apply the operation on the element even if the result of the operation is already equal to the sum of its digits.

Return *the minimum element that can be obtained in `nums` after applying the operation any number of times on each element*.

### Example 1:
```
Input: nums = [1, 2, 3, 4, 5] 
Output: 1 
Explanation:
For each number in the array, applying the digit sum operation does not change the array. Therefore, the minimum element is 1.
```
### Example 2:
```
Input: nums = [111, 222, 333, 444] 
Output: 3
Explanation:
Replace each number with the sum of its digits: [111 -> 1+1+1 = 3, 222 -> 2+2+2 = 6, 333 -> 3+3+3 = 9, 444 -> 4+4+4 = 12]. After performing the digit sum operations, the array becomes [3, 6, 9, 12]. The minimum element is 3.
```
### Constraints:
- `1 <= nums.length <= 1000`
- `0 <= nums[i] <= 10^6`

---
