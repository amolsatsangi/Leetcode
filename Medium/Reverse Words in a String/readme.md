# Reverse Words in a String

**Link to the problem:** [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
The problem requires reversing the order of words while preserving individual word structure. The key observation is that spaces act as delimiters, and multiple spaces should be reduced to a single space in the final result.

## Approach
1. Reverse the entire string to bring words to their final positions but in a reversed order.
2. Iterate through the string, extracting words while handling multiple spaces.
3. Reverse each word before appending it to the result to restore its original form.
4. Construct the final string by properly handling spaces.

## Complexity
- **Time complexity:** O(N)  
  Each character is processed a constant number of times (reversals and iteration).  
- **Space complexity:** O(1)  
  The transformation is done in place without extra memory usage, except for temporary variables.
