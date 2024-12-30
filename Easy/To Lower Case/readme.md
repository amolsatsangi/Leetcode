# LeetCode Problem - To Lower Case

**Link to the problem:** [To Lower Case](https://leetcode.com/problems/to-lower-case/description/)

## Intuition
The problem requires converting all uppercase characters in a string to lowercase. Since ASCII values for uppercase and lowercase characters differ by a fixed amount, this difference can be used for conversion.

## Approach
1. Iterate through each character in the string.
2. Check if the character is uppercase (i.e., between 'A' and 'Z').
3. Convert it to its lowercase equivalent using the ASCII difference.
4. Return the modified string.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the length of the string. Each character is processed once.
- **Space complexity:** \(O(1)\), as the transformation is done in place without using additional space.
