# Maximum Number of Words Found in Sentences

**Link to the problem:** [Maximum Number of Words Found in Sentences](https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/)

## Intuition
The problem requires counting the maximum number of words in a sentence. My initial thought was to iterate through each sentence and count the spaces, as the number of spaces plus one gives the total word count for that sentence.

## Approach
1. Iterate through the list of sentences.
2. For each sentence, count the number of spaces to determine the number of words.
3. Keep track of the maximum word count encountered during the traversal.
4. Return the maximum word count as the result.

## Complexity
- **Time complexity:** O(n * m)  
  Where \( n \) is the number of sentences and \( m \) is the average length of each sentence.

- **Space complexity:**  O(1) 
  The solution uses a constant amount of extra space.
