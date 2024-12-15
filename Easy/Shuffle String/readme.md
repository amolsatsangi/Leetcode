# Shuffle String

**Link to the problem:** [Shuffle String](https://leetcode.com/problems/shuffle-string/description/)

## Intuition
The problem requires rearranging characters of a string `s` based on the positions specified in the `indices` array. My first thought was to use an auxiliary string of the same size as `s` to map characters directly to their new positions.

## Approach
1. Create a new string `new_str` initialized with the size of `s` and filled with placeholder characters.
2. Iterate through the `indices` array, and for each character in `s`, place it in its corresponding position in `new_str` as specified by `indices[i]`.
3. Return the reconstructed string.


