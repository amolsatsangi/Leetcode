# LeetCode Problem - Check if a String Is an Acronym of Words

**Link to the problem:** [Check if a String Is an Acronym of Words](https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/)

## Intuition
The problem requires checking if a given string `s` is an acronym formed from the first letters of words in a given list. The key observation is that the length of `s` must match the number of words, and each character of `s` should correspond to the first letter of the respective word.

## Approach
- First, check if the length of `s` matches the number of words; if not, return `false`.  
- Iterate through the words and compare each character of `s` with the first letter of the corresponding word.  
- If any character mismatch is found, return `false`; otherwise, return `true`.  

## Complexity
- **Time complexity:** O(n), where \(n\) is the number of words, as we iterate through the list once.  
- **Space complexity:** O(1), since only a constant amount of extra space is used.  
