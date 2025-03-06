# LeetCode Problem - Maximum Average Subarray I

**Link to the problem:** [Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires finding the contiguous subarray of length `k` with the maximum average. Instead of recalculating the sum for each subarray, we can use prefix sums to optimize the process.

## Approach
- Compute the prefix sum of the array to facilitate quick subarray sum calculations.  
- Initialize the maximum sum as the sum of the first `k` elements.  
- Iterate through the remaining elements, updating the maximum sum by subtracting the element that moves out of the window and adding the new element entering the window.  
- Return the maximum sum divided by `k` to get the average.  

## Complexity
- **Time complexity:** \(O(n)\), as we traverse the array once for prefix sums and once for the sliding window.  
- **Space complexity:** \(O(1)\), since the solution modifies the input array without using extra space.  
