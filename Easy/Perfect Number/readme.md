# Perfect Number

**Link to the problem:** [Perfect Number](https://leetcode.com/problems/perfect-number/)

## Intuition
A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. The first thought is to iterate through possible divisors and sum them up, ensuring we include both the divisor and its corresponding pair.

## Approach
1. Start with a base sum of 1 since 1 is a divisor of every number.
2. Iterate from 2 to the square root of the number to find divisors. For every divisor `i`, add both `i` and `num / i` to the sum, as they come in pairs.
3. If the input is 1, immediately return false since it cannot be a perfect number.
4. After the loop, compare the sum of the divisors with the original number to determine if it's a perfect number.

## Complexity
- **Time complexity:**  O(sqrt(n))  
  We only iterate up to the square root of the number to find divisors.

- **Space complexity:**  O(1)   
  Only a few variables are used for calculations, and no additional data structures are required.
