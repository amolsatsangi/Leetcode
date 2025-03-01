# LeetCode Problem - Counting Bits

**Link to the problem:** [Counting Bits](https://leetcode.com/problems/counting-bits/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires counting the number of `1` bits in the binary representation of numbers from `0` to `n`. Instead of recalculating for each number, we can use previously computed results to optimize the process.  

## Approach
- Use dynamic programming with the relation `arr[i] = arr[i & (i - 1)] + 1`.  
- This formula works by removing the last set bit from `i` and using the precomputed value.  
- Start with `arr[0] = 0` and iterate from `1` to `n`, computing values using the above relation.  

## Complexity
- **Time complexity:** \(O(n)\), since we process each number once.  
- **Space complexity:** \(O(n)\), due to the output array storing results.  
