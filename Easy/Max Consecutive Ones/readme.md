# Max Consecutive Ones

**Link to the problem:** [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)

## Intuition
The problem requires finding the maximum number of consecutive 1s in a binary array. The simplest way is to traverse the array while counting consecutive 1s and resetting the count whenever a 0 is encountered.

## Approach
- Iterate through the array, maintaining a `local` count of consecutive 1s.
- Update the global maximum `max` whenever a 0 is encountered.
- At the end of the traversal, ensure the last streak of consecutive 1s is considered in the `max`.

## Complexity
- **Time complexity:** O(n), where `n` is the size of the array. The array is traversed once.
- **Space complexity:** O(1), as no additional space is used apart from variables.

