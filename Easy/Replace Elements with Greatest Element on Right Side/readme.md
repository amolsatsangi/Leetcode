# Replace Elements with Greatest Element on Right Side

**Link to the problem:** [Replace Elements with Greatest Element on Right Side](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/)

## Intuition
The problem can be solved by iterating through the array from right to left. As we traverse, we keep track of the maximum value seen so far and replace the current element with this maximum. This ensures each element gets replaced by the greatest element on its right.

## Approach
- Start from the last element of the array and traverse it in reverse order.
- Maintain a variable to keep track of the maximum element encountered so far.
- For each element:
  - Replace it with the current maximum.
  - Update the maximum if the current element is greater.

## Complexity
- **Time complexity:** O(n), where n is the size of the array. The array is traversed once.
- **Space complexity:** O(1), as the solution uses constant extra space.
