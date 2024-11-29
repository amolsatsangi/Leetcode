# First Unique Character in a String

**Link to the problem:** [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/description/)

## Intuition
To identify the first unique character, we need to determine the frequency of each character in the string. This can help us quickly locate the first character that appears only once.

## Approach
1. **Using Hash Map:**
   - Traverse the string to store the frequency of each character in a hash map.
   - Traverse the string again to check the frequency of each character; return the index of the first character with a frequency of 1.

2. **Using Nested Loops:**
   - For each character in the string, compare it with every other character using a nested loop to check if it is unique.
   - Return the index of the first character that is not repeated.

## Complexity

### Hash Map Approach:
- **Time complexity:** O(n), where `n` is the length of the string (two traversals).
- **Space complexity:** O(1), as the hash map can hold at most 26 characters for lowercase English letters.

### Nested Loops Approach:
- **Time complexity:** O(n^2), where `n` is the length of the string (due to nested loops).
- **Space complexity:** O(1), as no additional data structures are used.
