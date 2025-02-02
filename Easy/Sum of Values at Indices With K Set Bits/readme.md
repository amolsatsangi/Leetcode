# Sum of Values at Indices With K Set Bits

**Link to the problem:** [Sum of Values at Indices With K Set Bits](https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/description/)

## Intuition
The problem requires summing elements at indices where the number of set bits (1s) in the binary representation equals `k`. The key observation is that checking set bits can be efficiently done using bitwise operations.

## Approach
1. Iterate over all indices of the array.
2. Count the number of set bits in the binary representation of each index.
3. If the count matches `k`, add the corresponding element from `nums` to the sum.
4. Return the final sum.

## Complexity
- **Time complexity:** `O(n log i)`, where `n` is the size of `nums` and `log i` is the bit-counting operation for each index.
- **Space complexity:** `O(1)`, as only a few integer variables are used.
