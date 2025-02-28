# LeetCode Problem - Find the Highest Altitude

**Link to the problem:** [Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires tracking altitude changes based on a given `gain` array. The key observation is that altitude at any point is the cumulative sum of `gain` values, starting from zero.  

## Approach
- Initialize `max_height` to store the highest altitude and `local_height` to track the current altitude.  
- Iterate through the `gain` array, updating `local_height` by adding each element.  
- Update `max_height` whenever `local_height` exceeds it.  
- Return `max_height` after iterating through the array.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of elements in `gain`, since we iterate through the array once.  
- **Space complexity:** \(O(1)\), as only a few integer variables are used.  
