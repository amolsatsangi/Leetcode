# Minimum Number of Changes to Make Binary String Beautiful

**Problem Link:** [Minimum Number of Changes to Make Binary String Beautiful](https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/?envType=daily-question&envId=2024-11-05)

## Intuition
To make the binary string "beautiful," we can aim to ensure that every pair of consecutive characters in even-indexed positions are the same. We only need to count the changes needed for each such pair.

## Approach
1. Iterate through the string in steps of 2, checking pairs of consecutive characters.
2. If characters in a pair are not the same, increment the `beautiful_pair` counter, which counts how many pairs require changes.
3. Return `beautiful_pair` as the minimum number of changes needed.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the length of the string, since we process each character in pairs.
- **Space complexity:** \(O(1)\), as we use only a constant amount of extra space.
