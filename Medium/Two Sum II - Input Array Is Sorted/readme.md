# LeetCode Problem - Two Sum II - Input Array Is Sorted

**Link to the problem:** [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1460157370/)

## Intuition
The problem can be solved efficiently using the **two-pointer technique** because the array is sorted. By starting with one pointer at the beginning and the other at the end, we can adjust the pointers based on their sum relative to the target.

## Approach
1. Initialize two pointers: one at the start (`i`) and the other at the end (`j`) of the array.
2. Calculate the sum of the elements at these pointers:
   - If the sum equals the target, store the 1-based indices and return.
   - If the sum is less than the target, increment the start pointer.
   - If the sum is greater than the target, decrement the end pointer.
3. Repeat until the pointers meet.

## Complexity
- **Time complexity:** \(O(n)\)  
   The array is traversed at most once, adjusting pointers as needed.
- **Space complexity:** \(O(1)\)  
   No extra data structures are used beyond a few variables.
