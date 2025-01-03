# Decode the Message

**Problem Link:** [Decode the Message](https://leetcode.com/problems/decode-the-message/)

## Intuition
The problem requires creating a mapping between the unique characters of the key and the English alphabet. Once the mapping is established, it can be used to decode the given message. 

## Approach
1. Traverse the `key` string to construct a mapping between its characters and the English alphabet, ensuring that each unique character is assigned sequentially. Ignore spaces in the key.
2. Use the constructed mapping to transform each character in the `message` string into its decoded form.
3. Append the decoded characters to form the resultant string.

## Complexity
- **Time complexity:** O(n + m), where `n` is the length of the key and `m` is the length of the message.
- **Space complexity:** O(1), as the mapping contains at most 26 entries (for lowercase English letters).
