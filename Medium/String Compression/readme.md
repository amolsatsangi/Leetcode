# LeetCode Problem - String Compression

**Link to the problem:** [String Compression](https://leetcode.com/problems/string-compression/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires modifying the input array in place to compress consecutive repeating characters. Instead of storing the full sequence, we replace consecutive characters with a single occurrence followed by their count (if greater than 1).  

## Approach
- Use a pointer `k` to track the position in the modified array.  
- Iterate through the array while counting consecutive occurrences of each character.  
- If a character appears more than once, store its count as characters in the array.  
- Move to the next unique character and repeat the process.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of characters in the array, as we traverse the array once.  
- **Space complexity:** \(O(1)\), since the compression is done in place without using extra space.  
