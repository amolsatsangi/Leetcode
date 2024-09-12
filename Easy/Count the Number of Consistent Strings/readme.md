# LeetCode Problem - Count the Number of Consistent Strings

## Problem Description

[LeetCode Problem Link](https://leetcode.com/problems/count-the-number-of-consistent-strings/description/)

Given a string `allowed` consisting of distinct characters and an array of strings `words`, a string is **consistent** if all characters in the string appear in the string `allowed`.

Return the number of **consistent** strings in the array `words`.

### Example:

#### Example 1:
```text
Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
```

#### Example 2:
```text
Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
Output: 7
Explanation: All strings are consistent.
```

#### Example 3:
Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"] 
Output: 4 
Explanation: Strings "cc", "acd", "ac", and "d" are consistent.

### Constraints:
- `1 <= words.length <= 10^4`
- `1 <= allowed.length <= 26`
- `1 <= words[i].length <= 10`
- The characters in `allowed` are distinct.
- `words[i]` and `allowed` consist only of lowercase English letters.
