# Find the Number of Good Pairs

**Problem Link:** [Find the Number of Good Pairs](https://leetcode.com/problems/find-the-number-of-good-pairs-i/description/)

## Intuition
To determine the number of "good pairs," the solution compares all possible pairs `(i, j)` of the arrays `nums1` and `nums2` and checks if the condition `nums1[i] % (nums2[j] * k) == 0` is satisfied.

## Approach
- Iterate through each element in `nums1` and `nums2` using nested loops.
- For each pair `(i, j)`, check if the given condition holds.
- Increment the count for each valid pair.
- Return the count as the result.

## Complexity
- **Time complexity:** O(n * m) , where \( n \) and \( m \) are the sizes of `nums1` and `nums2`, respectively.
- **Space complexity:**  O(1) , as no extra space is used.
