# Intuition
The problem asks to reverse a string, which is represented as an array of characters. The simplest way to reverse an array is by swapping the first element with the last, the second element with the second last, and so on. This way, we reverse the string in place without needing additional space.

# Approach
1. We use two pointers: one `i` starting from the beginning of the array, and another `j` starting from the end.
2. We iterate through the array, swapping the characters at positions `i` and `j` until the middle of the array is reached.
   - After each swap, increment `i` and decrement `j` to move the pointers toward the center.
3. The loop runs for half the size of the array (i.e., `s.size() / 2`), ensuring that all characters are swapped by the time `i` and `j` meet.

# Complexity
- Time complexity: O(n), where `n` is the number of characters in the array. We swap each element exactly once, and the number of operations is proportional to the size of the array.
  
- Space complexity: O(1), as the reversal is done in place, and we only use a constant amount of extra space (for the two pointers `i` and `j`).
