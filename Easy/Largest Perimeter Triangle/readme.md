# LeetCode Problem - Largest Perimeter Triangle

**Link to the problem:** [Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/description/?envType=study-plan-v2&envId=programming-skills)

## Intuition
To form a valid triangle, the sum of the two smaller sides must be greater than the largest side. The goal is to maximize the perimeter while ensuring this condition is met.

## Approach
- Sort the array in ascending order.
- Iterate from the largest element down, checking if the three largest available sides satisfy the triangle inequality.
- If a valid triangle is found, return its perimeter.
- If no valid triangle exists, return `0`.

## Complexity
- **Time complexity:** O(n * log n), due to sorting.
- **Space complexity:** O(1), as only a few variables are used.
