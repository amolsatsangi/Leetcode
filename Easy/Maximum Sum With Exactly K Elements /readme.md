# Maximum Sum With Exactly K Elements

**Link to the problem:** [Maximum Sum With Exactly K Elements](https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/description/)

## Intuition
To get the maximum possible sum by picking exactly `k` elements from the array (with replacement), it's optimal to start with the maximum element and keep incrementing it `k` times.

## Approach
1. Find the maximum element in the array.
2. Add the maximum element and the next `k-1` consecutive integers to the score.
3. This results in a sequence: `max + (max+1) + (max+2) + ... + (max + k - 1)`.

## Complexity
- **Time complexity:** O(n), where n is the size of the input array (for finding the maximum element).
- **Space complexity:** O(1), since no extra space is used.
