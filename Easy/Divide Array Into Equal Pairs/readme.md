# LeetCode Problem - Divide Array Into Equal Pairs

**Link to the problem:** [Divide Array Into Equal Pairs](https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-03-17)

## Intuition
To divide the array into pairs where both elements are equal, each number must appear an even number of times in the array.

## Approach

### Hash Map Approach:
- Use a hash map to count the frequency of each number.
- If any number has an odd frequency, return `false`.
- Otherwise, return `true`.

### Sorting Approach:
- Sort the array so that equal elements are adjacent.
- Check every two consecutive elements; if any pair does not match, return `false`.
- If all pairs match, return `true`.

## Complexity

### Hash Map Approach:
- **Time complexity:** O(n), where n is the size of the array (due to single pass for counting and checking).  
- **Space complexity:** O(n), for storing frequencies in the hash map.  

### Sorting Approach:
- **Time complexity:** O(n * log n), due to sorting.  
- **Space complexity:** O(1), since sorting is done in place.  
