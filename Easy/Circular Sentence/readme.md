# Circular Sentence

**Link to the problem:** [Circular Sentence](https://leetcode.com/problems/circular-sentence/?envType=daily-question&envId=2024-11-02)

## Intuition
To check if a sentence is circular, we need to ensure that the first character matches the last character, and each word transition (i.e., every space) ends with the same character that the next word begins with. 

## Approach
1. Check if the first and last characters of the sentence are the same.
2. Traverse the sentence, and for each space character, confirm that the character before the space matches the character after the space.
3. If all checks pass, the sentence is circular; otherwise, it is not.

## Complexity
- **Time complexity:** O(n), where n is the length of the sentence, as we traverse the sentence once.
- **Space complexity:** O(1), only a constant amount of extra space is used.
