# LeetCode Problem - Maximum 69 Number

**Link to the problem:** [Maximum 69 Number](https://leetcode.com/problems/maximum-69-number/description/)

## Intuition
Since we are allowed to change **at most one digit**, and we want to **maximize** the number, the optimal move is to convert the **leftmost '6'** (if any) to a '9'. Changing any later '6' would result in a smaller increase in value.

## Approach

### Approach 1: String Manipulation
- Convert the number to a string.
- Traverse the string from left to right.
- Change the first occurrence of '6' to '9'.
- Convert the string back to an integer and return.

### Approach 2: Mathematical (Without String Conversion)
- Traverse the digits of the number from right to left.
- Track the position of the **last seen '6'** (i.e., the lowest significant '6').
- If no '6' is found, return the number.
- Otherwise, add the correct value at the tracked position to flip the digit.

## Complexity

### Approach 1:
- **Time complexity:** \(O(d)\), where \(d\) is the number of digits in the number.
- **Space complexity:** \(O(d)\) due to string conversion.

### Approach 2:
- **Time complexity:** \(O(d)\), since we process each digit once.
- **Space complexity:** \(O(1)\), as no extra space is used beyond a few variables.
