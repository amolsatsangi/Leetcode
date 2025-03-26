# LeetCode Problem - Find the XOR of Numbers Which Appear Twice

**Link to the problem:** [Find the XOR of Numbers Which Appear Twice](https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/)

## Intuition
The problem requires finding numbers that appear exactly twice in the array and computing their XOR. Instead of sorting or using nested loops, we can efficiently count occurrences using a hash map.  

## Approach
- Use an unordered map to store the frequency of each number in the array.  
- Iterate through the map and XOR all numbers that appear exactly twice.  
- Return the final XOR value.  

## Complexity
- **Time complexity:** \(O(n)\), as we traverse the array once to count occurrences and then iterate through the map.  
- **Space complexity:** \(O(n)\), due to the extra storage used for the hash map.  
