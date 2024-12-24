# Number of 1 Bits

**Link to the problem:** [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/description/)

## Intuition
The problem requires counting the number of 1s in the binary representation of a given integer. The simplest way to approach this is by repeatedly checking the remainder when dividing the number by 2, which gives the last bit of the binary form.

## Approach
1. Use a loop to repeatedly divide the number by 2 until it becomes 0.
2. Track the remainder in each iteration to check if the last bit is 1.
3. Increment the count whenever a 1 is found.

## Complexity
- **Time complexity:** O(log n)  
  Each division by 2 reduces the number of bits to process.

- **Space complexity:** O(1)  
  No additional space is required apart from a few variables.
