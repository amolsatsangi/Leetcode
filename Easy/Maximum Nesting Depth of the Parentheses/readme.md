# Maximum Nesting Depth of the Parentheses

**Link to the problem:** [Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/)

## Intuition
The problem requires finding the maximum nesting depth of valid parentheses. My initial thought was to maintain a counter that increments when encountering an opening parenthesis `(` and decrements when encountering a closing parenthesis `)`. The maximum value of this counter during the traversal gives the desired depth.

## Approach
1. Initialize two variables: `count` to track the current nesting depth and `maxi` to store the maximum depth encountered.
2. Traverse the string character by character:
   - Increment `count` for every opening parenthesis `(`.
   - Decrement `count` for every closing parenthesis `)`.
   - Update `maxi` to the maximum value of `count` at each step.
3. Return `maxi` as the result.

## Complexity
- **Time complexity:** O(n), where `n` is the length of the string. We traverse the string once.
- **Space complexity:** O(1), as no extra space is used apart from a few variables.
