# LeetCode Problem - Flipping an Image

## Intuition
The problem requires flipping the image horizontally and then inverting it. Instead of using extra space, we can modify the image in place by swapping elements and applying bitwise inversion.

## Approach
- First, traverse each row and swap elements symmetrically to reverse the row.
- Then, iterate through the matrix again to invert each element using XOR with `1`.

## Complexity
- **Time complexity:** \(O(n^2)\), where \(n\) is the number of rows or columns, as we process each element twice.  
- **Space complexity:** \(O(1)\), since the modifications are done in place without extra space.  
