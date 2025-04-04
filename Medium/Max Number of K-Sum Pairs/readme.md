# LeetCode Problem - Max Number of K-Sum Pairs

**Link to the problem:** [Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The task is to find the maximum number of operations that remove pairs of elements that sum to a target value `k`. Sorting the array helps in efficiently finding such pairs using the two-pointer technique.

## Approach
- First, sort the array to allow using two pointers (`i` and `j`) from both ends.
- While `i < j`, check if the sum of elements at both pointers equals `k`.
  - If yes, increment the operation count and move both pointers inward.
  - If the sum is less than `k`, move the left pointer (`i`) to the right.
  - If the sum is more than `k`, move the right pointer (`j`) to the left.
- Continue this process until all possible pairs are checked.

## Complexity
- **Time complexity:** O(n * log n) due to the sorting step, where \(n\) is the number of elements in the array.
- **Space complexity:** O(1), since the algorithm uses constant extra space.
