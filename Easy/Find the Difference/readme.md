# Find the Difference

**Link to the problem:** [Find the Difference](https://leetcode.com/problems/find-the-difference/)

## Intuition
To identify the extra character in string `t`, we can utilize a frequency map to count characters in `s` and adjust the counts as we iterate through `t`. The character with a negative count is the extra one.

## Approach
1. Use an unordered map to store the frequency of each character in string `s`.
2. Iterate through string `t`, decrementing the frequency in the map for each character.
3. Identify the character in `t` whose frequency becomes negative. This is the extra character.

## Complexity
- **Time complexity:** \(O(n + m)\), where \(n\) is the length of `s` and \(m\) is the length of `t`.
- **Space complexity:** \(O(1)\), as the unordered map stores at most 26 characters (limited by lowercase English letters).
