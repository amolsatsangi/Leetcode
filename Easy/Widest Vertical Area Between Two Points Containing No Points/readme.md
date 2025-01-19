# Widest Vertical Area Between Two Points Containing No Points

**Link to the problem:** [Widest Vertical Area Between Two Points Containing No Points](https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/)

## Intuition
The problem requires finding the widest vertical area between points, where a vertical area is defined as the gap between consecutive x-coordinates when the points are sorted by their x-coordinates. The first step is to recognize that sorting the x-coordinates is essential to find these gaps efficiently.

## Approach

### First Solution
1. Use a custom comparator to sort the points based on their x-coordinates.
2. Iterate through the sorted points and calculate the difference between consecutive x-coordinates.
3. Keep track of the maximum difference encountered.

### Second Solution
1. Extract all the x-coordinates from the given points into a separate vector.
2. Sort the vector of x-coordinates.
3. Iterate through the sorted x-coordinates to calculate the differences between consecutive values and track the maximum difference.

## Complexity

### First Solution
- **Time complexity:** O(n * log n)
- **Space complexity:** O(1), as no extra space proportional to the input size is used apart from the input itself.

### Second Solution
- **Time complexity:** O(n * log n)
- **Space complexity:** O(n), as an additional vector is used to store the x-coordinates.
