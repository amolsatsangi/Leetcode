# LeetCode Problem - Find Pivot Index

**Link to the problem:** [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires finding an index where the sum of elements to the left is equal to the sum of elements to the right. A prefix sum approach is well-suited for efficiently computing left and right sums without redundant calculations.

## Approach
- First, compute the prefix sum of the array to store cumulative sums.  
- Initialize left sum (`lsum`) as `0` and right sum (`rsum`) as the total sum minus the first element.  
- Check the first index separately. If `lsum == rsum`, return `0`.  
- Iterate through the array, updating `lsum` and `rsum` at each step. If they are equal, return the current index.  
- If no pivot index is found, return `-1`.  

## Complexity
- **Time complexity:** \(O(n)\), as the solution processes the array in a single pass after computing the prefix sum.  
- **Space complexity:** \(O(1)\), since only a few integer variables are used.  
