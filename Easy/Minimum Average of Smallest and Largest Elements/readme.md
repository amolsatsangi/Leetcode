# Minimum Average of Smallest and Largest Elements

## Intuition
The problem asks us to find the minimum average of the smallest and largest elements after removing some elements from the array. My intuition was that if we sort the array, we can pair up the smallest and largest elements systematically to find the minimum average.

## Approach
1. Sort the array in ascending order
2. For each pair consisting of the i-th smallest element and the i-th largest element, calculate their average
3. Return the minimum average found

The approach works because after sorting:
- `nums[i]` represents the i-th smallest element
- `nums[n-1-i]` represents the i-th largest element from the end

By checking all possible pairs from opposite ends of the sorted array, we can find the minimum average.

## Complexity
- Time complexity: **O(n log n)**
  - Sorting the array takes O(n log n) time

- Space complexity: **O(1)**
  - We only use a constant amount of extra space regardless of input size
  - The sorting is done in-place
