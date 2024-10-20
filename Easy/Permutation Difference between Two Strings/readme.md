# Intuition
The problem is to find the difference in indices between matching characters from two strings `s` and `t`. For each matching character pair, the absolute difference between their positions in the respective strings is accumulated to get the total sum. This sum gives the "permutation difference" between the two strings.

# Approach
1. Initialize a variable `sum` to 0 to store the accumulated index differences.
2. Use a nested loop to iterate over all characters in both strings `s` and `t`.
   - For each character in `s`, compare it with all characters in `t`.
   - When characters match, calculate the absolute difference in their indices.
   - Add the difference to the `sum`.
3. Return the final value of `sum` after all comparisons.

# Complexity
- Time complexity: O(n * m), where `n` is the length of string `s` and `m` is the length of string `t`. This is because for every character in `s`, we are comparing it with all characters in `t`.
  
- Space complexity: O(1), as the algorithm uses a constant amount of extra space regardless of the input size.
