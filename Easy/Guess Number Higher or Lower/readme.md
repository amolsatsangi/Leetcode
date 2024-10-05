# Intuition
The goal is to efficiently guess a number between 1 and `n` using binary search, reducing the search space in half with each guess based on whether the target is higher or lower than the current guess.

# Approach
1. Initialize `begin` to 0 and `end` to `n`.
2. Use binary search:
   - Calculate `mid = (begin + end) / 2`.
   - If `guess(mid)` is -1, adjust `end = mid - 1`.
   - If `guess(mid)` is 1, adjust `begin = mid + 1`.
   - If `guess(mid)` is 0, return `mid`.
3. Continue until the number is found.

# Complexity
- Time complexity: **O(log n)** (binary search halves the search space each time).
- Space complexity: **O(1)** (uses constant extra space).
