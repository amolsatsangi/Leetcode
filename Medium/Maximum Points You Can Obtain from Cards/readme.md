# Maximum Points You Can Obtain from Cards

**Link to the problem:** [Maximum Points You Can Obtain from Cards](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/)

## Intuition
To maximize the score by picking `k` cards from either end, the idea is to explore all combinations of taking some cards from the start and the rest from the end.

## Approach
1. Calculate the initial score by taking the first `k` cards from the start.
2. Then, iteratively swap cards from the end with cards from the beginning—one at a time.
3. Track the maximum score obtained after each swap.
4. Return the maximum score found.

## Complexity
- **Time complexity:** O(k), since we process at most `k` elements from the front and `k` from the back.
- **Space complexity:** O(1), no extra space used apart from a few variables.
