# Valid Anagram

**Link to the problem:** [Valid Anagram](https://leetcode.com/problems/valid-anagram/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
To determine if two strings are anagrams, count the frequency of each character in both strings and compare. If the counts match for all characters, the strings are anagrams.

## Approach
1. Use an unordered map to store the frequency of characters in the first string.
2. Decrease the frequency count for each character in the second string.
3. If any frequency becomes negative or there are leftover characters, return `false`.
4. Return `true` if all character counts match.

## Complexity
- **Time complexity:** O(n), where `n` is the length of the strings (both strings are traversed once).
- **Space complexity:** O(1), as the map size is limited to the number of distinct characters (26 for lowercase English letters).
