# Find Indices of Stable Mountains

**Link to the problem:** [Find Indices of Stable Mountains](https://leetcode.com/problems/find-indices-of-stable-mountains/description/)

## Intuition
The problem involves finding indices in the `height` array where the mountain heights exceed a given `threshold`. The goal is to efficiently iterate through the array and check for the condition.

## Approach
- Iterate through the `height` array starting from the second element.
- For each element, check if the previous height is greater than the `threshold`.
- If the condition is met, record the current index in the result list.
- Return the list of indices as the output.

## Complexity
- **Time complexity:** O(n), where `n` is the size of the `height` array. This is due to the single iteration over the array.
- **Space complexity:** O(k), where `k` is the number of indices that satisfy the condition, as we store these indices in the result list.
