# LeetCode Problem - 4Sum

**Link to the problem:** [4Sum](https://leetcode.com/problems/4sum/)

## Intuition
The problem involves finding unique quadruplets in the array that sum up to a given target. My initial thought was to sort the array to enable efficient traversal and use a combination of nested loops and the two-pointer technique to explore all possible quadruplets while avoiding duplicates.

## Approach
1. **Sorting**: Sort the array to ensure that duplicates can be easily skipped, and the two-pointer approach can be effectively applied.
2. **Nested Loops**: Use two nested loops for the first two numbers of the quadruplet. Skip duplicates for both these numbers.
3. **Two-Pointer Technique**: Use two pointers, one starting after the second loop and the other at the end of the array, to find the remaining two numbers of the quadruplet.
4. **Handling Duplicates**: After finding a valid quadruplet, adjust the pointers to skip duplicate numbers, ensuring unique quadruplets.
5. **Overflow Handling**: Use `long int` for the sum calculation to avoid overflow issues with large numbers.

## Complexity
- **Time Complexity**:  
  The solution involves sorting the array (`O(n log n)`) and three nested loops with a two-pointer traversal. The overall time complexity is approximately `O(n^3)`, where `n` is the size of the array.

- **Space Complexity**:  
  The algorithm uses `O(1)` additional space, as no extra data structures are utilized apart from the output vector.
