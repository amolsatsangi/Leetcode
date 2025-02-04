# Maximum Ascending Subarray Sum

**Link to the problem:** [Maximum Ascending Subarray Sum](https://leetcode.com/problems/maximum-ascending-subarray-sum/)

## Intuition
The problem requires finding the sum of the maximum ascending subarray. The idea is to iterate through the array while maintaining a running sum of consecutive increasing elements. Whenever a decrease is encountered, update the maximum sum and reset the running sum.

## Approach
- Initialize `sum` with the first element and `max_sum` as 0.
- Traverse the array starting from the second element:
  - If the current element is greater than the previous one, add it to `sum` and update `max_sum`.
  - Otherwise, update `max_sum`, reset `sum` to the current element, and continue.
- Return `max_sum` as the result.

## Complexity
- **Time complexity:** \(O(N)\), as we iterate through the array once.
- **Space complexity:** \(O(1)\), since only a few variables are used.
