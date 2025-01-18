# Decrypt String from Alphabet to Integer Mapping

**Link to the problem:** [Decrypt String from Alphabet to Integer Mapping](https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/)

## Intuition
The problem requires mapping substrings of a given string to corresponding characters in the alphabet. Observing the pattern, the '#' character identifies mappings for double-digit numbers (`10#` to `26#`), while single characters map to `1` through `9`. This can be handled using simple string manipulation and conditional checks.

## Approach
1. Iterate through the string while checking for the '#' character to identify two-digit mappings.
2. If a '#' is found, extract the preceding two digits, calculate the corresponding character, and move the pointer forward by three positions.
3. For single-digit mappings, calculate the corresponding character directly and move the pointer forward by one position.
4. Append each mapped character to the resulting string.
5. Return the constructed string as the final result.

## Complexity
- **Time complexity:** O(n) , where \( n \) is the length of the input string. Each character is processed once.
- **Space complexity:** O(1) , as no additional data structures are used apart from the result string.
