# Remove Duplicates from Sorted Array

**LeetCode Problem Link:**  
[LeetCode - Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

## Problem Description

Given a sorted array `nums`, remove the duplicates in-place such that each element appears only once and returns the new length of the array.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

### Example 1:
```text
Input: nums = [1,1,2] 
Output: 2, nums = [1,2,_] 
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2. It doesn't matter what you leave beyond the new length.
```

### Example 2:
```text
Input: nums = [0,0,1,1,1,2,2,3,3,4] 
Output: 5, nums = [0,1,2,3,4,,,,,_] 
Explanation: Your function should return length = 5, with the first five elements of nums being 0, 1, 2, 3, and 4. It doesn't matter what you leave beyond the new length.
```
## Constraints

- `0 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.
