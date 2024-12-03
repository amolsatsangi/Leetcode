# Intuition
The problem requires adding spaces at specific indices in a given string. My initial thought was to create a new string by extracting substrings and inserting spaces at the specified positions.

# Approach
1. Create an empty result string
2. Append the size of the string to the `spaces` vector to handle the last substring
3. Extract the first substring from the start of the string to the first space index
4. Add a space after the first substring
5. Iterate through the space indices:
   - Extract subsequent substrings between space indices
   - Add a space between substrings (except after the last substring)
6. Return the modified string

# Complexity
- Time complexity: $$O(n)$$
  

- Space complexity: $$O(n)$$
