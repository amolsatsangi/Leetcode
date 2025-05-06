# Reverse Degree of a String

## Intuition
The problem asks us to calculate the reverse degree of a string, which is the sum of the weights of each character. The weight of a character is defined as its position in the string (1-indexed) multiplied by its reverse value. The reverse value is determined by the distance from 'z' (26 - (char - 'a')).

## Approach
1. Initialize a sum variable to track the total reverse degree.
2. Iterate through each character in the string.
3. For each character at position i (0-indexed):
   - Calculate its position weight: (i+1) to make it 1-indexed
   - Calculate its reverse value: 26 - (s[i] - 'a')
   - Multiply these values and add to the sum
4. Return the final sum as the reverse degree.

## Complexity
- Time complexity: **O(n)**
- Space complexity: **O(1)** 

