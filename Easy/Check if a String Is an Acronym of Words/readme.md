# LeetCode Problem - Check if a String Is an Acronym of Words

**Link to the problem:** [Check if a String Is an Acronym of Words](https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/)

## Intuition
The problem requires checking if a given string `s` is formed by concatenating the first letter of each word in the `words` list.  

## Approach
- Initialize an empty string to store the acronym.  
- Iterate through the `words` list and append the first character of each word to the string.  
- Compare the constructed string with `s` and return the result.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of words, since we iterate through the list once.  
- **Space complexity:** \(O(n)\), as the constructed string can store up to `n` characters.  
