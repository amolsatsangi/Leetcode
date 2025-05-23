# Intuition
The problem asks for the maximum number of complete rows we can form with `n` coins in a staircase pattern. Each row `i` needs exactly `i` coins. We need to find the largest `k` such that `1 + 2 + 3 + ... + k ≤ n`.

# Approach
Use a simple iterative approach to simulate building the staircase row by row:
1. Start with `sum = 0` and iterate through each row `i`
2. Add `i` coins to the current sum for row `i`
3. If the sum exceeds `n`, return `i-1` (previous complete row)
4. If the sum equals `n`, return `i` (current row is complete)

# Complexity
- Time complexity: $$O(\sqrt{n})$$
  <!-- We iterate until sum exceeds n. Since sum = i*(i+1)/2, we need roughly √(2n) iterations -->

- Space complexity: $$O(1)$$
  <!-- Only using constant extra space for variables -->
