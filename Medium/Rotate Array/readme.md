# Rotate Array

**Link to the problem:** [Rotate Array](https://leetcode.com/problems/rotate-array/)

## Intuition
The problem can be solved efficiently by reversing parts of the array. The key observation is that rotating the array by `k` steps can be achieved by reversing specific segments of the array and then reversing the entire array.

## Approach
1. Compute the effective rotation `k % n` to handle cases where `k` is larger than the size of the array. Delcare rotation point j as n-k%n.
2. Reverse the first part of the array up to the rotation point.
3. Reverse the remaining part of the array after the rotation point.
4. Reverse the entire array to achieve the desired rotation.

## Complexity
- **Time complexity:** O(n)  
  Each reversal operation iterates through the array, resulting in a linear time complexity.

- **Space complexity:** O(1)  
  The solution operates in place, requiring no additional space.
