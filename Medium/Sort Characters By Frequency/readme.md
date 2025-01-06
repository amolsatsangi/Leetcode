# Sort Characters By Frequency

**Problem Link:** [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/description/)

## Intuition
The problem requires sorting characters by their frequency in descending order. My initial thought was to count the frequency of each character and sort them based on their frequency and character order.

## Approach
1. **Frequency Array**: I used an array to count the frequency of all alphanumeric characters. The array stores the frequency and character value for sorting.
2. **Sorting**: The array is sorted using a custom comparator:
   - First by frequency (descending).
   - Second by character value for consistent ordering.
3. **Result Construction**: After sorting, the characters are appended to the result string based on their frequency.

## Complexity
- **Time Complexity**:  
  - Counting character frequencies: O(n), where `n` is the length of the input string.  
  - Sorting the frequency array: O(62 * log(62)) ≈ O(1) since the array size is fixed.  
  Overall: O(n).

- **Space Complexity**: O(1), as the frequency array size is constant (62 entries for all alphanumeric characters).
