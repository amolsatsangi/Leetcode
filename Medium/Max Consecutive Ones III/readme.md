# [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/)

## Intuition
To find the longest subarray containing at most `k` zeros, we can treat the problem as a sliding window problem, where we try to expand the window as much as possible while maintaining at most `k` zeros within it.

## Approach
We use two pointers `l` (left) and `r` (right) to define a sliding window. As we move the right pointer, we count the number of zeros in the window. If the count exceeds `k`, we move the left pointer forward until the zero count is back within the allowed limit. Throughout the process, we track the maximum window size that satisfies the condition.

## Complexity
- **Time complexity:** O(n), where n is the size of the input array. Each element is visited at most twice.
- **Space complexity:** O(1), no extra space is used apart from a few variables.
