# Unique Number of Occurrences

**Link to the problem:** [Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/description/)

## Intuition
The key observation is that the number of occurrences of each element in the array must be unique. If two different elements have the same frequency, the answer is `false`.

## Approach
1. Sort the array to group identical elements together.
2. Traverse the array and count occurrences of each unique element.
3. Store these frequencies in a separate list.
4. Sort the frequency list and check for duplicates.
5. If any frequency repeats, return `false`; otherwise, return `true`.

## Complexity
- **Time Complexity:** \(O(N * log N)\) (due to sorting the array and frequency list)
- **Space Complexity:** \(O(N)\) (to store frequencies)
