# Binary Search

**Link to the problem:** [Binary Search](https://leetcode.com/problems/binary-search/)

## Intuition
The problem can be solved efficiently by leveraging the binary search algorithm, which divides the search space into halves. Since the input array is sorted, binary search allows us to quickly determine the location of the target or confirm its absence.

## Approach
1. Initialize two pointers, `start` and `end`, to represent the search boundaries.
2. Compute the middle index (`mid`) and compare the value at `nums[mid]` with the target:
   - If `nums[mid]` equals the target, return the index `mid`.
   - If `nums[mid]` is greater than the target, narrow the search to the left half by updating `end`.
   - If `nums[mid]` is less than the target, narrow the search to the right half by updating `start`.
3. Repeat the process until the target is found or the search boundaries overlap, indicating the target is not in the array.
4. Return `-1` if the target is not found.

## Complexity
- **Time complexity:** O(log n), where `n` is the size of the input array. Each iteration reduces the search space by half.
- **Space complexity:** O(1), as the solution operates in constant space without additional data structures.
