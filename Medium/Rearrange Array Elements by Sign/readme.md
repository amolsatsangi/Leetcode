# LeetCode Problem - Rearrange Array Elements by Sign

**Link to the problem:** [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/description/)

## Intuition
The goal is to rearrange the elements of the array such that all positive numbers are placed at even indices and all negative numbers are placed at odd indices. The order of positive and negative numbers should be preserved in the process.

## Approach
To solve this problem, we can use a two-pointer technique:
- One pointer is used to place positive numbers at even indices.
- The other pointer is used to place negative numbers at odd indices.

We iterate through the array, and for each element, based on its sign, we place it in the appropriate index of a new result array.

## Complexity
- **Time complexity:** O(n), where n is the size of the input array. We iterate through the array once to rearrange the elements.
- **Space complexity:** O(n), where n is the size of the input array. We use an additional array to store the rearranged elements.
