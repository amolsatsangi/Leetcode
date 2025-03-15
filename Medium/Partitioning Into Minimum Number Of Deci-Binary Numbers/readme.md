# LeetCode Problem - Partitioning Into Minimum Number of Deci-Binary Numbers

**Link to the problem:** [Partitioning Into Minimum Number of Deci-Binary Numbers](https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/)

## Intuition
The minimum number of deci-binary numbers required to sum up to `n` is determined by the largest digit in `n`. This is because a deci-binary number contains only `0` and `1`, meaning each digit in `n` must be formed using at least that many `1`s.

## Approach
- Iterate through the string `n` to find the maximum digit.  
- The result is the maximum digit since it represents the minimum number of deci-binary numbers required.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the length of the string, as we scan it once.  
- **Space complexity:** \(O(1)\), since only a few integer variables are used.  
