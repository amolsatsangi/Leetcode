# Majority Element II

**Problem Link:** [Majority Element II](https://leetcode.com/problems/majority-element-ii/description/)

## Intuition
The problem involves finding elements that appear more than `n/3` times in the given array. Initially, I thought about using a hashmap to count frequencies but realized that this would take extra space. I then recalled the Boyer-Moore Voting Algorithm, which efficiently handles such problems with constant space.

## Approach
- Use two candidate variables (`el1` and `el2`) and their respective counters (`count1` and `count2`).
- In the first pass, identify potential candidates for majority elements by updating counters based on their occurrences.
- In the second pass, validate these candidates by counting their actual occurrences in the array.
- Finally, return the candidates that meet the `n/3` threshold.

## Complexity
- **Time complexity:** O(n), where n is the size of the array. The algorithm requires two linear passes over the array.
- **Space complexity:** O(1), as we only use a constant amount of additional space.
