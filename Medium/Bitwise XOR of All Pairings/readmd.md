# LeetCode Problem - Bitwise XOR of All Pairings

**Link to the problem:** [Bitwise XOR of All Pairings](https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/?envType=daily-question&envId=2025-01-16)

## Intuition
The problem can be simplified by recognizing patterns based on the parity (odd or even) of the sizes of `nums1` and `nums2`. When the size of one array is even, its contribution to the XOR sum is neutralized, and we can ignore it. The key idea is to calculate XOR only for the relevant array(s) depending on their sizes.

## Approach
1. Check the sizes of `nums1` and `nums2`:
   - If both have even sizes, the result is `0` as all pairings will cancel each other.
   - If one has an odd size and the other has an even size, calculate the XOR of all elements in the array with an even size.
   - If both have odd sizes, calculate the XOR for both arrays and combine the results.

2. Use a single loop to compute the XOR for each array when needed, ensuring efficiency.

## Complexity
- **Time complexity:**  
  - `O(n + m)`, where `n` is the size of `nums1` and `m` is the size of `nums2`, as we traverse each array once to compute the XOR.
  
- **Space complexity:**  
  - `O(1)`, as no additional data structures are used, and calculations are done in constant space.
