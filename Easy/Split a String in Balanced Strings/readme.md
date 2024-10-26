# Intuition
The problem requires us to split a string into the maximum number of balanced substrings. A balanced substring contains an equal number of 'R' and 'L' characters. The key insight here is to keep counting occurrences of 'R' and 'L' as we iterate through the string and split whenever the counts are equal, indicating a balanced substring.

# Approach
1. Initialize counters for 'R' and 'L' (R and L), and a variable `max` to keep track of the number of balanced strings found.
2. Iterate through each character in the string `s`:
   - If the character is 'R', increment the `R` counter.
   - If the character is 'L', increment the `L` counter.
3. Whenever the counts of `R` and `L` are equal, increment `max` to count this balanced substring, then reset `R` and `L` to zero.
4. At the end of the loop, `max` will hold the total number of balanced substrings.

# Complexity
- Time complexity: O(n), where n is the length of the string `s`. We only iterate through the string once.
- Space complexity: O(1), as we only use a fixed amount of extra space for the counters.
