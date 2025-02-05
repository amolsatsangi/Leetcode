# Check if One String Swap Can Make Strings Equal

**Link to the problem:** [Check if One String Swap Can Make Strings Equal](https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/)

## Intuition
The problem requires checking if we can make two strings equal with at most one swap. If the strings are already equal, no swap is needed. Otherwise, we should identify the mismatched positions and determine whether swapping two characters resolves the difference.

## Approach
1. If the strings have different lengths, return `false`.
2. Use two pointers to identify positions where characters differ.
3. If more than two positions have mismatches, return `false` since only one swap is allowed.
4. Swap the identified characters and check if the resulting string matches the target.
5. Return the comparison result.

## Complexity
- **Time complexity:** \(O(n)\) – We traverse the strings once to find mismatches and perform a constant-time swap.
- **Space complexity:** \(O(1)\) – Only a few extra variables are used.
