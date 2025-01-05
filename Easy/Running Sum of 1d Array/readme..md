# Running Sum of 1d Array

**Problem Link:** [Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/description/)

## Intuition
The problem requires calculating the running sum of an array. The initial thought is to iterate through the array while maintaining a cumulative sum and updating each element with this sum.

## Approach
1. Start by initializing the first element as the initial sum.
2. Traverse the array from the second element onwards.
3. For each element, add its value to the cumulative sum and update the current element with the sum.
4. Return the modified array as the result.

## Complexity
- **Time Complexity:** O(n), where n is the size of the input array. Each element is visited once during the traversal.
- **Space Complexity:** O(1), as the solution modifies the input array in place without requiring additional space.
