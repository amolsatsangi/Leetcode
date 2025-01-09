# LeetCode Problem - Counting Words With a Given Prefix

**Link to the problem:** [Counting Words With a Given Prefix](https://leetcode.com/problems/counting-words-with-a-given-prefix/description/)

## Intuition
The problem requires checking whether a given prefix matches the beginning of each word in the input list. A straightforward approach is to iterate through all the words and compare their characters with the prefix.

## Approach
- Iterate through the list of words.
- For each word, compare the characters sequentially with the prefix using a loop.
- If the prefix matches entirely, increment the count.
- Return the total count at the end.

## Complexity
- **Time complexity:** O(n * m), where \(n\) is the number of words and \(m\) is the length of the prefix. For each word, we compare up to \(m\) characters.
- **Space complexity:** O(1), as no additional space is used apart from variables for counting.
