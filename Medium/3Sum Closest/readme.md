# LeetCode Problem - 3Sum Closest

**Link to the problem:** [3Sum Closest](https://leetcode.com/problems/3sum-closest/)

## Intuition
The problem requires finding a triplet in the array whose sum is closest to the given target. Sorting the array and using a two-pointer approach helps efficiently explore possible sums.

## Approach
- Sort the array to enable an efficient two-pointer traversal.
- Iterate through the array, fixing one element and using two pointers (one at the next element and one at the end) to check possible sums.
- Track the closest sum found so far and update it when a better one is found.
- Adjust the pointers based on the current sum to move towards the target.

## Complexity
- **Time complexity:** \(O(n^2)\), where \(n\) is the number of elements, as we iterate through the array and use a two-pointer approach for each element.
- **Space complexity:** \(O(1)\), since only a few extra variables are used.
