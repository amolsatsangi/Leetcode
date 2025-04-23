# LeetCode Problem - Count Largest Group

**Link to the problem:** [Count Largest Group](https://leetcode.com/problems/count-largest-group/description/)

## Intuition
The sum of digits of a number determines its group. By tracking how many numbers fall into each group, we can find the size of the largest group and count how many groups share that maximum size.

## Approach
We iterate from 1 to `n`, compute the digit sum of each number, and use a hashmap to count occurrences of each digit sum. Then, we find the maximum group size and count how many groups have that size.

## Complexity
- **Time complexity:** O(n * d), where `d` is the number of digits in `n` (at most log₁₀(n)).
- **Space complexity:** O(k), where `k` is the number of unique digit sums (at most 36 for n ≤ 10⁴).
