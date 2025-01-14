# Find Common Elements Between Two Arrays

**Link to the problem:** [Find Common Elements Between Two Arrays](https://leetcode.com/problems/find-common-elements-between-two-arrays/description/)

## Intuition
The solution leverages a straightforward nested loop approach to compare elements in the two arrays. The goal is to count common elements in both arrays by iterating through each pair of elements.

## Approach
1. For each element in the first array (`nums1`), compare it with every element in the second array (`nums2`). Count the matches and break the inner loop to avoid counting duplicates.
2. Similarly, iterate through each element in `nums2` and compare it with elements in `nums1` to count matches from the other perspective.
3. Return the counts as a result.

## Complexity
- **Time complexity:**  
  The approach involves two nested loops, leading to a time complexity of O(n * m), where \(n\) and \(m\) are the sizes of `nums1` and `nums2`, respectively.

- **Space complexity:**  
  The solution operates in \(O(1)\) additional space as it does not use any extra data structures beyond the input arrays and counters.
