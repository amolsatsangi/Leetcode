# LeetCode Problem - Clear Digits

**Link to the problem:** [Clear Digits](https://leetcode.com/problems/clear-digits/description/)

## Intuition
The problem requires removing a digit and its preceding lowercase letter when they appear together. My first thought was to iterate through the string and erase such pairs whenever found.

## Approach
- Iterate through the string from left to right.
- If a digit is found and its previous character is a lowercase letter, remove both.
- Restart the iteration whenever a removal occurs to ensure all pairs are deleted.
- Return the modified string.

## Complexity
- **Time Complexity:** O(N^2) (In the worst case, erasing characters repeatedly leads to O(N) deletions, each taking O(N) time).
- **Space Complexity:** O(1) (Modifies the string in place without extra space).
