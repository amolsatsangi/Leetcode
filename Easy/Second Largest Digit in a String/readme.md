# Second Largest Digit in a String

**Link to the problem:** [Second Largest Digit in a String](https://leetcode.com/problems/second-largest-digit-in-a-string/description/)

## Intuition
The problem involves identifying the second-largest numeric digit in a string. My initial thought was to traverse the string and track the largest and second-largest digits using two variables.

## Approach
1. Iterate through each character of the string.
2. Check if the character is a numeric digit.
3. Update the largest (`max`) and second-largest (`s_max`) digits during the iteration.
4. If the second-largest digit does not exist, return `-1`.

## Complexity
- **Time complexity:** O(n), where `n` is the length of the string, as we traverse the string once.
- **Space complexity:** O(1), as we use only a fixed amount of extra space.
