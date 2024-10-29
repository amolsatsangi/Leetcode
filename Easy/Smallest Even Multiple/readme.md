# Intuition
In this problem, the goal is to find the smallest even multiple of a given integer `n`. The smallest even multiple of any number is either the number itself (if it’s even) or twice the number (if it’s odd). This insight simplifies the problem as we only need to check whether `n` is even or odd.

# Approach
1. Check if the given integer `n` is even by evaluating `n % 2 == 0`.
    - If `n` is even, then `n` is already the smallest even multiple.
    - If `n` is odd, the smallest even multiple will be `n * 2`.
2. Return the value based on the condition above.

# Complexity
- Time complexity: **O(1)**  
  The solution involves only a single conditional check and multiplication in the worst case, both of which take constant time.

- Space complexity: **O(1)**  
  The solution requires no extra space beyond a single integer return value.
