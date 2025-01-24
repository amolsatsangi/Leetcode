# LeetCode Problem - 3Sum

**Link to the problem:** [3Sum](https://leetcode.com/problems/3sum/)

## Intuition
The problem requires finding all unique triplets in the array that sum up to zero. Sorting the array simplifies the process by allowing us to use a two-pointer approach to efficiently find the required triplets.

## Approach
1. **Sort the Array**: Sorting the array ensures that duplicates are easier to handle and the two-pointer technique becomes feasible.
2. **Iterate through the Array**: Use a loop to fix the first number of the triplet, ensuring we skip duplicate numbers.
3. **Two-Pointer Technique**: For the remaining two numbers, use two pointers (`j` and `k`) to find combinations that sum to zero. Adjust the pointers based on whether the sum is less than or greater than zero.
4. **Avoid Duplicates**: After identifying a valid triplet, move the pointers past duplicate values to ensure only unique triplets are included.

## Complexity
- **Time complexity:** \(O(n^2)\), where \(n\) is the size of the array. Sorting takes \(O(n \log n)\), and the two-pointer traversal for each element is \(O(n)\).
- **Space complexity:** \(O(1)\) (ignoring the output space), as the solution is achieved in-place after sorting.
