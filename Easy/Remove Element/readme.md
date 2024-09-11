# Remove Element

## Problem Description

Given an array `nums` and a value `val`, remove all instances of that value in-place and return the new length of the array.

**Do not** allocate extra space for another array; you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

### Example 1:
```text
Input: nums = [3,2,2,3], val = 3 
Output: 2, nums = [2,2,,] 
Explanation: Your function should return length = 2, with the first two elements of nums being 2.
```

### Example 2:
```text
Input: nums = [0,1,2,2,3,0,4,2], val = 2 
Output: 5, nums = [0,1,4,3,,,,] \
Explanation: Your function should return length = 5, with the first five elements of nums being 0, 1, 4, 3, and the elements beyond the new length can be anything.
```

### Example 3:
```text
Input: nums = [1], val = 1
Output: 0, nums = []
Explanation: Your function should return length = 0, with no elements left in the array.
```
## Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`
