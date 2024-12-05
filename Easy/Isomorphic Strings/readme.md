# LeetCode Problem - Isomorphic Strings

**Link to the problem:** [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/description/)

## Intuition
The problem requires checking if two strings can be transformed into each other by mapping characters uniquely. My first thought was to use hash maps to track character mappings from `s` to `t` and also ensure the reverse mapping is valid.

## Approach
1. Use two hash maps:
   - `s_map` to map characters from `s` to `t`.
   - `t_map` to count occurrences of characters in `t`.
2. Iterate through the strings:
   - If a character in `s` is not mapped, map it to the corresponding character in `t` and increment its count in `t_map`.
   - If a mismatch is found (e.g., a character in `s` maps to a different character in `t` or a character in `t` is mapped more than once), return `false`.
3. Return `true` if all mappings are consistent.

## Complexity
- **Time complexity:** O(n), where `n` is the length of the strings. We iterate through the strings once.
- **Space complexity:** O(1), as the hash maps store a maximum of 26 entries for lowercase English letters.
