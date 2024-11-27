# Intersection of Two Arrays II

**Link to the problem:** [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/description/)

## Intuition
To find the intersection of two arrays efficiently, leverage a hash map to track the frequency of elements in one array. Use the second array to identify elements that exist in both, keeping count to handle duplicates.

## Approach
1. Use an `unordered_map` to count occurrences of each element in the first array (`nums1`).
2. Sort the second array (`nums2`) for easier processing.
3. Iterate through `nums2`:
   - Check if the current element exists in the map.
   - If found and its count is greater than 0, add it to the result and decrement the count in the map.
4. Handle duplicates by ensuring counts are not reused unnecessarily.

## Complexity
- **Time complexity:** 
  - `O(n + m log m)` where `n` is the size of `nums1` (map population) and `m log m` is for sorting `nums2`.
- **Space complexity:** 
  - `O(n)` for the `unordered_map` storing elements of `nums1`.
