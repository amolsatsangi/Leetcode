# LeetCode Problem - Count Good Triplets

**Link to the problem:** [Count Good Triplets](https://leetcode.com/problems/count-good-triplets/?envType=daily-question&envId=2025-04-14)

---

## Intuition
The problem requires checking all possible triplets `(i, j, k)` such that `i < j < k` and each pair among the triplet satisfies a given absolute difference constraint. Since the constraints are small (array length up to 100), a brute-force approach is acceptable.

## Approach
Use three nested loops to generate all valid triplets `(i, j, k)` where `i < j < k`. For each triplet, check if the conditions:
- `|arr[i] - arr[j]| <= a`
- `|arr[j] - arr[k]| <= b`
- `|arr[i] - arr[k]| <= c`

are all satisfied. If they are, increment the count of good triplets.

## Complexity
- **Time complexity:** O(n³), where n is the length of the array — due to the three nested loops.
- **Space complexity:** O(1), since no extra space is used aside from a counter.
