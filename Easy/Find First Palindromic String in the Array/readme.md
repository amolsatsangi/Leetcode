# Find First Palindromic String in the Array

## Intuition
The problem asks us to find the first palindromic string in an array of strings. A palindrome is a string that reads the same forward and backward. The intuition is to check each string in the array one by one, verifying if it's a palindrome, and return the first one that satisfies this condition.

## Approach
The approach is straightforward:
1. Iterate through each string in the input array
2. For each string, check if it's a palindrome:
   - Compare characters from both ends moving inward
   - If all character pairs match, the string is a palindrome
3. Return the first palindromic string found
4. If no palindrome exists in the array, return an empty string

## Complexity
- Time complexity: **O(n × m)**
  - Where n is the number of strings in the array
  - And m is the average length of the strings
  - In the worst case, we need to check each character of each string

- Space complexity: **O(1)**
  - We only use a constant amount of extra space regardless of input size
  - The solution uses a boolean flag and loop counters which require constant space
