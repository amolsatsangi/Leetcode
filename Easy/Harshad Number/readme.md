# LeetCode Problem - Harshad Number

**Link to the problem:** [Harshad Number](https://leetcode.com/problems/harshad-number/)

## Intuition
A number is a Harshad number if it is divisible by the sum of its digits. The goal is to compute the sum of digits and check divisibility.  

## Approach
- Extract each digit of the number by taking the remainder when divided by 10.  
- Accumulate the sum of digits while reducing the number.  
- Check if the original number is divisible by this sum. If yes, return the sum; otherwise, return `-1`.  

## Complexity
- **Time complexity:** O(log x), since the number of digits in \(x\) determines the iterations.  
- **Space complexity:** O(1), as only a few integer variables are used.  
