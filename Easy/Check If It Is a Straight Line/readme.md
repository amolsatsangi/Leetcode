# LeetCode Problem - Check If It Is a Straight Line

**Link to the problem:** [Check If It Is a Straight Line](https://leetcode.com/problems/check-if-it-is-a-straight-line/description/)

## Intuition
To determine if all points lie on a single straight line, we can use the concept of slope. If the slope between any two points remains consistent for all points in the given set, they lie on a straight line. For vertical lines, the x-coordinates of all points must remain the same.

## Approach
1. Calculate the slope between the first two points.
2. Iterate through the rest of the points:
   - For non-vertical lines, check if the y-coordinate of each point matches the expected value calculated using the slope.
   - For vertical lines, ensure all x-coordinates are the same.
3. Return `true` if all points meet the conditions; otherwise, return `false`.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of points. We iterate through all points once.
- **Space complexity:** \(O(1)\), as we use a constant amount of extra space.
