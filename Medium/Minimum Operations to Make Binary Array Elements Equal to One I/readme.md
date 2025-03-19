# LeetCode Problem - Minimum Operations to Make Binary Array Elements Equal to One I

**Link to the problem:** [Minimum Operations to Make Binary Array Elements Equal to One I](https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/?envType=daily-question&envId=2025-03-19)

## Intuition
The goal is to convert all `0`s in the array to `1`s using a specific operation. The operation allows flipping the current element and the next two elements. If it is impossible to convert all `0`s, return `-1`.  

## Approach
- Iterate through the array and check for `0`s.  
- If a `0` is found, check if there are at least two more elements ahead to perform the operation. If not, return `-1`.  
- Flip the current element and the next two elements accordingly and increase the operation count.  
- Continue this process until the end of the array.  

## Complexity
- **Time complexity:** \(O(n)\), as we iterate through the array once.  
- **Space complexity:** \(O(1)\), since the operations are performed in-place.  
