# Largest Odd Number in String
**LeetCode Problem Link:**
[Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/description/)
## Problem Description

You are given a string `num`, representing a large integer. Return the **largest-valued odd** number that is a **non-empty substring** of `num`, or an empty string `""` if no odd number exists.

A **substring** is a contiguous sequence of characters within a string.

### Example 1:
```text
Input: num = "52" 
Output: "5" 
Explanation: The largest odd number is 5.
```

### Example 2:
```text
Input: num = "4206"
Output: ""
Explanation: There is no odd number in the string.
```

### Example 3:
```text
Input: num = "35427"
Output: "35427"
Explanation: The entire string is an odd number.
```
## Constraints

- `1 <= num.length <= 10^5`
- `num` only consists of digits and does not contain any leading zeros.
