# LeetCode Problem - Monotonic Array

**Link to the problem:** [Monotonic Array](https://leetcode.com/problems/monotonic-array/description/?envType=study-plan-v2&envId=programming-skills)

## Intuition
A monotonic array is either entirely non-increasing or non-decreasing. The goal is to determine which trend the array follows and ensure it remains consistent throughout.  

## Approach
- Identify the initial trend by comparing the first two elements. If they are equal, mark the trend as uncertain.  
- Iterate through the array, checking if elements follow the determined trend. If the trend was uncertain, determine it based on the first differing pair.  
- If an element contradicts the established trend, return `false`; otherwise, return `true`.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of elements in the array, since we iterate through it once.  
- **Space complexity:** \(O(1)\), as only a few boolean variables are used.  
