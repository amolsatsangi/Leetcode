# LeetCode Problem - Add Binary

**Link to the problem:** [Add Binary](https://leetcode.com/problems/add-binary/description/)

## Intuition
The problem involves adding two binary strings. My first thought was to simulate the binary addition process similar to how we add numbers manually, starting from the least significant bit to the most significant bit, while handling the carry.

## Approach
1. Use two pointers starting from the end of both binary strings.
2. Perform bit-by-bit addition while considering the carry.
3. Handle any remaining bits in either string after one of them is exhausted.
4. If a carry remains after processing both strings, append it to the result.
5. Reverse the constructed string to get the final binary sum.

## Complexity
- **Time complexity:** O(max(n, m)), where `n` and `m` are the lengths of the two binary strings. Each bit is processed once.
- **Space complexity:** O(max(n, m)), as the result can be at most one bit longer than the longer input string.
