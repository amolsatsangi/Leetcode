# Longest Substring Without Repeating Characters

**Link to the problem:** [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

---

## Intuition
The goal is to find the length of the longest substring without repeating characters. The natural idea is to use a sliding window to keep track of characters we've seen so far and adjust the window when we encounter a duplicate.

---

## Approach
We use two pointers `i` and `j` to define the current substring window. Starting with the first character, we expand the window by moving `j` forward while characters are unique. If a duplicate is found, we move `i` forward and reset the substring. We track the maximum length of such substrings throughout the process.

---

## Complexity
- **Time complexity:** O(n²) in the worst case due to repeated substring construction and search.
- **Space complexity:** O(k), where `k` is the length of the current substring (at most n), used to store the temporary substring.
