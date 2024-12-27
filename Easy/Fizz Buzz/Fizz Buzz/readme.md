# LeetCode Problem - Fizz Buzz

**Link to the problem:** [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/)

## Intuition
The problem can be solved using basic iteration and modular arithmetic. The goal is to determine the appropriate output for each number by checking divisibility by 3, 5, or both.

## Approach
1. Iterate through numbers from 1 to `n`.
2. Use conditional checks:
   - If the number is divisible by both 3 and 5, append `"FizzBuzz"` to the result.
   - If only divisible by 3, append `"Fizz"`.
   - If only divisible by 5, append `"Buzz"`.
   - Otherwise, append the number itself as a string.
3. Store results in a list and return the final list.

## Complexity
- **Time complexity:** O(n), where `n` is the input number, as we iterate through numbers from 1 to `n`.
- **Space complexity:** O(n), as the result list stores `n` elements.
