# Find the Peaks

**Link to the problem:** [Find the Peaks](https://leetcode.com/problems/find-the-peaks/description/)

## Intuition
To identify the peaks in the given array, we need to check each element and determine if it is greater than its immediate neighbors. This is because a peak is defined as an element that is strictly greater than both its previous and next elements.

## Approach
1. Traverse the array starting from the second element and stopping at the second-to-last element.
2. For each element, compare it with its previous and next elements.
3. If the current element is greater than both its neighbors, record its index as a peak.
4. Return the list of indices representing the peaks.

## Complexity
- **Time complexity:** O(n)  
  The algorithm involves a single traversal of the array, where `n` is the number of elements in the input array.

- **Space complexity:** O(k)  
  Where `k` is the number of peaks found. Additional space is only used to store the indices of the peaks.
