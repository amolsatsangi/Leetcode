# Intuition
By using a stack, we can easily reverse the characters up to the first occurrence of `ch` and append the rest of the string as is.

# Approach
1. Traverse through the given string `word` character by character.
2. Use a stack to store characters until the first occurrence of `ch` is found.
3. Once `ch` is found, pop the characters from the stack and append them to a new string `new_word` to reverse the prefix.
4. If `ch` is not found, return the original word.
5. Append the remaining part of the word (after `ch`) to the new string and return it.

# Complexity
- Time complexity: O(n), where `n` is the length of the string. 
  
- Space complexity: O(n), where `n` is the number of characters before and including `ch`, due to the usage of a stack to store characters.
