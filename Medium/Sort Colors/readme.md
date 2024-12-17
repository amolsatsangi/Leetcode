# LeetCode Problem - Sort Colors

**Link to the problem:** [Sort Colors](https://leetcode.com/problems/sort-colors/)

## Intuition
The problem can be solved efficiently using the **Dutch National Flag Algorithm**.  
The idea is to classify elements into three categories (`0s`, `1s`, `2s`) and rearrange them in a single traversal using three pointers: `low`, `mid`, and `high`.

## Approach
- Use three pointers:
  - `low`: Marks the boundary for `0s` (start).
  - `mid`: Current element being processed.
  - `high`: Marks the boundary for `2s` (end).
- Traverse the array until `mid` crosses `high`:
  - If `nums[mid] == 0`: Swap `nums[mid]` with `nums[low]`, increment `low` and `mid`.
  - If `nums[mid] == 1`: Simply move to the next element (`mid++`).
  - If `nums[mid] == 2`: Swap `nums[mid]` with `nums[high]`, decrement `high`.

This ensures that all `0s` are at the start, all `2s` are at the end, and all `1s` are in between.

