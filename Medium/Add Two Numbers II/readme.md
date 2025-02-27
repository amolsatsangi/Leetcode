# LeetCode Problem - Add Two Numbers II

**Link to the problem:** [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/description/?envType=study-plan-v2&envId=programming-skills)

## Intuition
Since the numbers are stored in linked lists in reverse order, directly adding them is difficult. Reversing both lists allows easy addition from the least significant digit to the most significant digit, just like regular addition.

## Approach
1. Reverse both linked lists to process digits from least to most significant.  
2. Traverse both lists, adding corresponding digits along with the carry.  
3. If one list is longer, continue adding its remaining digits.  
4. If there's a carry after processing both lists, add an extra node.  
5. Reverse the result list to restore the original order.  

## Complexity
- **Time complexity:** O(n + m), where \(n\) and \(m\) are the lengths of the input lists, since we reverse and traverse them once.  
- **Space complexity:** O(1), as we modify the linked lists in place without extra storage.  
