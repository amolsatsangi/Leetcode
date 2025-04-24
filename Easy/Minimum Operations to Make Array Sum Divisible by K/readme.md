# Minimum Operations to Make Array Sum Divisible by K

**Link to the problem:** [Minimum Operations to Make Array Sum Divisible by K](https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/)

# Intuition
The core idea is based on the observation that we only need to ensure the sum of the array is divisible by `k`. The remainder of the sum modulo `k` tells us the minimum operations needed to reach a divisible state.

# Approach
- Calculate the total sum of the array.
- If the sum is already divisible by `k`, no operation is needed.
- Otherwise, the remainder when the sum is divided by `k` gives the minimum number of operations required.

# Complexity
- Time complexity: **O(n)** — We traverse the entire array once to compute the sum.
- Space complexity: **O(1)** — Only a constant amount of space is used.
