# LeetCode Problem - Partition Array According to Given Pivot

**Link to the problem:** [Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/)

## Intuition
The problem requires rearranging the array such that elements less than the pivot come first, followed by elements equal to the pivot, and finally, elements greater than the pivot. The relative order of elements must be preserved.

## Approach
- Traverse the array to collect elements smaller than the pivot.  
- Count occurrences of the pivot while iterating.  
- Append the pivot `count` times to maintain relative order.  
- Traverse the array again to collect elements greater than the pivot.  

## Complexity
- **Time complexity:** \(O(n)\), since we iterate through the array twice.  
- **Space complexity:** \(O(n)\), as we use an extra array to store the result.  
