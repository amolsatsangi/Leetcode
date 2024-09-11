# Merge Sorted Array
**LeetCode Problem Link:**
[Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/description/)
## Problem Description

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order. You are also given an integer `m`, the number of elements in `nums1`, and an integer `n`, the number of elements in `nums2`.

Merge `nums2` into `nums1` as one sorted array.

The merge should be done **in-place** using the array `nums1` as the base. The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n` where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to 0 and should be ignored. `nums2` has a length of `n`.

### Example 1:
```text
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3 
Output: [1,2,2,3,5,6]
```

### Example 2:
```text
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
```

## Constraints

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10^9 <= nums1[i], nums2[j] <= 10^9`
