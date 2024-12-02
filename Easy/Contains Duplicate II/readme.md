# Contains Duplicate II

**Link to the problem:** [Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
To determine if any two duplicate elements in the array exist within a distance of `k`, we can leverage a hash map to store the most recent index of each element. This allows efficient lookups and comparisons.

## Approach
1. Traverse through the array while maintaining a hash map to store the indices of elements.
2. For each element, check if it exists in the hash map.
   - If it does, calculate the distance between the current index and the stored index.
   - If the distance is less than or equal to `k`, return `true`.
3. Update the hash map with the current index of the element.
4. If no such pair is found after the traversal, return `false`.

## Complexity
- **Time complexity:** \( O(n) \)  
  Traversing the array and performing constant-time operations for hash map lookups and updates.

- **Space complexity:** \( O(n) \)  
  The hash map can store up to `n` elements in the worst case.
