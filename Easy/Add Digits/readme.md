# Add Digits

**Link to the problem:** [Add Digits](https://leetcode.com/problems/add-digits/)

## Intuition
The problem requires repeatedly summing the digits of a number until it becomes a single-digit number. My initial thought was to use a loop to continuously extract and sum the digits.

## Approach
1. Use a loop to process the digits of the number.
2. Extract the last digit using modulo operation and reduce the number using integer division.
3. Add the extracted digit to the remaining number until it becomes a single digit.

## Complexity
- **Time complexity:** O(n), where n is the number of digits in the input number.
- **Space complexity:** O(1), as no additional space is used.
