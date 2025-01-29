# LeetCode Problem - Longest Consecutive Sequence

**Link to the problem:** [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/description/)

## Intuition
The problem requires finding the longest sequence of consecutive numbers in an unsorted array. A brute force approach would involve sorting, but a more efficient way is to use a data structure that enables quick lookups.

## Approach
- Use an unordered set to store all unique elements from the array.
- Iterate through the set and check for the start of a sequence (i.e., numbers that don’t have a smaller predecessor).
- For each start of a sequence, count the length by continuously checking for the next consecutive element.
- Keep track of the maximum sequence length encountered.

## Complexity
- **Time complexity:** `O(N)`, since each element is processed at most twice (once during insertion and once during sequence checking).
- **Space complexity:** `O(N)`, due to storing elements in a set.
