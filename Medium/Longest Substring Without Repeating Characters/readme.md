# Longest Substring Without Repeating Characters

**Link to the problem:** [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

## Intuition
To find the longest substring without repeating characters, the idea is to maintain a sliding window and track characters we've already seen. If a repeating character is found, shift the start of the window just after the previous occurrence of the character.

## Approach
We use two pointers, `i` and `j`, to define the window and an unordered map to keep track of the most recent index of each character. We move `j` through the string:
- If the character is not in the current window, we update the map and extend the window.
- If it is, we move `i` to the right of the previous occurrence to maintain uniqueness.

We continuously update the maximum window length as we iterate.

## Complexity
- **Time complexity:** O(n), where n is the length of the string. Each character is visited at most twice.
- **Space complexity:** O(min(n, m)), where m is the size of the character set (typically 26 for lowercase letters or 128 for ASCII).
