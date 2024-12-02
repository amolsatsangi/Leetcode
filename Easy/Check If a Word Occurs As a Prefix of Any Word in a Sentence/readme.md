# Check If a Word Occurs as a Prefix of Any Word in a Sentence

**Problem Link:** [Check If a Word Occurs as a Prefix of Any Word in a Sentence](https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/?envType=daily-question&envId=2024-12-02)

## Intuition
To solve the problem, we need to split the sentence into individual words and check if the given `searchWord` is a prefix of any of those words. The prefix check can be performed by comparing characters sequentially from the start of both strings.

## Approach
1. Split the `sentence` into words using spaces as delimiters.
2. Iterate through the list of words and check each word for the prefix condition:
   - Compare characters of `searchWord` with the current word one by one.
   - If all characters of `searchWord` match the start of a word, return its 1-based index.
3. If no match is found, return `-1`.

## Complexity
- **Time complexity:**  
  \( O(N*M) \)  
  where \( N \) is the number of words in the sentence, and \( M \) is the average length of a word.  
  Splitting the sentence and performing prefix checks both contribute to this complexity.

- **Space complexity:**  
  \( O(W) \)  
  where \( W \) is the total number of words in the sentence, stored in a vector.
