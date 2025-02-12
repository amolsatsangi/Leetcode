# Reverse Vowels of a String

**Link to the problem:** [Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires reversing only the vowels in a given string while keeping the other characters in their original positions. Since swapping elements efficiently is best done with two-pointer techniques, an intuitive approach is to place one pointer at the start and another at the end, swapping vowels when found.

## Approach
- Use two pointers: one starting from the beginning (`i`) and another from the end (`j`).
- Move `i` forward until a vowel is found.
- Move `j` backward until a vowel is found.
- Swap the vowels at `i` and `j`, then continue moving both pointers inward.
- Repeat this process until `i` and `j` cross each other.

## Complexity
- **Time Complexity:** `O(n)`, as each character in the string is processed at most once.
- **Space Complexity:** `O(1)`, since only a few extra variables are used for pointer manipulation.
