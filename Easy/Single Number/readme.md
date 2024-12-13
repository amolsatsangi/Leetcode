# Single Number

**Link to the problem:** [Single Number](https://leetcode.com/problems/single-number/submissions/1478054746/)

## Intuition
The problem asks for the single element in an array where every other element appears twice. Using XOR is a natural choice, as it cancels out duplicate numbers and leaves the unique one.

## Approach
1. Initialize a variable `xor_ans` to `0`.
2. Traverse the array and XOR each element with `xor_ans`. This works because:
   - `a ^ a = 0` (same numbers cancel out).
   - `a ^ 0 = a` (unique number remains).
3. Return `xor_ans` as the result.

## Complexity
- **Time complexity:** \( O(n) \), where \( n \) is the size of the array. We traverse the array once.
- **Space complexity:** \( O(1) \), as no extra space is used.
