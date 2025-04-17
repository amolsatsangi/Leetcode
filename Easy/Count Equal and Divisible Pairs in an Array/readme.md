# [Count Equal and Divisible Pairs in an Array](https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/?envType=daily-question&envId=2025-04-17)

## Intuition
The problem asks to count the number of index pairs `(i, j)` such that `i < j`, `nums[i] == nums[j]`, and `(i * j) % k == 0`.  
This leads to a brute-force idea of checking every pair and counting the valid ones.

## Approach
Use two nested loops to iterate over all pairs `(i, j)` where `i < j`.  
For each pair, check:
- If the elements at both indices are equal: `nums[i] == nums[j]`
- If the product of the indices is divisible by `k`: `(i * j) % k == 0`  
If both conditions are true, increment the count.

## Complexity
- **Time complexity:** O(n²) — due to checking all pairs in the array  
- **Space complexity:** O(1) — no extra space used except for the counter
