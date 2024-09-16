# LeetCode Problem: Score of a String

[Problem Link: Score of a String](https://leetcode.com/problems/score-of-a-string/)

## Problem Description

You are given a balanced parentheses string `s` and you have to compute the score of the string based on the following rules:

1. `"()"` has score `1`.
2. `AB` has score `A + B`, where `A` and `B` are balanced parentheses strings.
3. `(A)` has score `2 * A`, where `A` is a balanced parentheses string.

### Example 1:
```
Input: s = "()" 
Output: 1
```

### Example 2:
```
Input: s = "(())" 
Output: 2
```
### Example 3:
```
Input: s = "hello"
Output: 13
Explanation: The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13
  ```
  
### Example 4:
```
Input: s = "zaz"
Output: 50
Explanation: The ASCII values of the characters in s are: 'z' = 122, 'a' = 97. So, the score of s would be |122 - 97| + |97 - 122| = 25 + 25 = 50.
```

### Constraints:

- `s` is a balanced parentheses string.
- `2 <= s.length <= 50`
