# LeetCode Problem - N-th Tribonacci Number

**Link to the problem:** [N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The Tribonacci sequence is similar to the Fibonacci sequence but considers the sum of the last three numbers instead of two. Observing the pattern, we can determine that a simple iterative approach will be efficient.

## Approach
We use an iterative approach with three variables to store the last three computed values. By updating them in a loop, we efficiently compute the N-th Tribonacci number without using extra space.

## Complexity
- **Time complexity:** \(O(n)\) – We compute the sequence iteratively up to \(n\).
- **Space complexity:** \(O(1)\) – Only a few integer variables are used, independent of \(n\).
