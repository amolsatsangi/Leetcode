# Find the Pivot Integer

## Solution 1: Mathematical Approach

### Intuition
The pivot integer `x` must satisfy the condition that the sum of numbers from 1 to `x` equals the sum of numbers from `x` to `n`. This means we need to find an integer `x` where `1 + 2 + ... + x = x + (x+1) + ... + n`.

### Approach
1. Calculate the sum of all numbers from 1 to n: `total = n * (n + 1) / 2`
2. For a pivot integer `x`:
   - Sum from 1 to x = `x * (x + 1) / 2`
   - Sum from x to n = `total - (x-1) * x / 2`
3. Setting these sums equal, we can derive that `x = sqrt(total)`
4. If `x` is a perfect square (integer), it's our answer; otherwise, no such pivot exists.

### Complexity
- Time complexity: **O(1)** - Constant time operations only
- Space complexity: **O(1)** - Only uses a fixed amount of extra space

## Solution 2: Prefix Sum Approach

### Intuition
We can compute two arrays: one with prefix sums (sum of elements from the start to current position) and one with suffix sums (sum of elements from current position to the end). The pivot is where these sums are equal.

### Approach
1. Create two vectors to store prefix and suffix sums
2. Populate these vectors by iterating through numbers 1 to n
3. Iterate through numbers 1 to n again to find where prefix sum equals suffix sum

### Complexity
- Time complexity: **O(n)** - We iterate through the array twice
- Space complexity: **O(n)** - We store two vectors of size n+1
