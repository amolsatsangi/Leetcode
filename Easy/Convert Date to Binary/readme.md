# Intuition
The problem requires converting the given date format (YYYY-MM-DD) into a binary representation. The intuition here is that each part of the date (year, month, and day) can be treated as a number and converted to its binary equivalent.

# Approach
1. **Split the Date:** 
   - Extract the year, month, and day from the input string using the `substr` function.
   
2. **Convert to Integer:**
   - Convert the year, month, and day substrings into integer values using `stoi`.
   
3. **Convert to Binary:**
   - Use a helper function `string_to_binary` to convert the integer values of year, month, and day into their binary string equivalents.
   
4. **Concatenate:**
   - Combine the binary strings of the year, month, and day with `"-"` as a separator to form the final binary date string.

# Complexity
- **Time complexity:**
  - The time complexity mainly depends on the number of bits required to represent each part of the date in binary. Each conversion of a number to a binary string has a time complexity of O(log n), where n is the number being converted.

- **Space complexity:**
  - The space complexity is O(log n) for storing the binary representation of the year, month, and day.
