# Minimum Bit Flips to Convert Number

**LeetCode Problem Link:**  
[Minimum Bit Flips to Convert Number](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/?envType=daily-question&envId=2024-09-11)

## Problem Statement

You are given two integers `start` and `goal`. You want to convert `start` into `goal` by flipping some bits (changing a `0` to `1` or changing a `1` to `0`).

Return the **minimum number of bit flips** to convert `start` to `goal`.

### Example 1:

```text
Input: start = 10, goal = 7
Output: 3
Explanation: The binary representation of 10 is "1010" and the binary representation of 7 is "0111". We need to flip the second, third, and fourth bits of `start` to get `goal`.
```
### Example 2:
```text
Input: start = 3, goal = 4
Output: 3
Explanation: The binary representation of 3 is "0011" and the binary representation of 4 is "0100". We need to flip all the bits of `start` to get `goal`.
```
Constraints:
0 <= start, goal <= 10^9
