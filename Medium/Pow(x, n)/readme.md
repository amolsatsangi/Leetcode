# LeetCode Problem - Pow(x, n)

**Link to the problem:** [Pow(x, n)](https://leetcode.com/problems/powx-n/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
The problem requires calculating `x` raised to the power `n`. Instead of performing `n` multiplications directly, we can optimize the process using exponentiation by squaring. This method reduces the number of multiplications significantly, making it efficient.

## Approach
- Handle negative exponents by converting `x^(-n)` into `1 / x^n`.
- Use **exponentiation by squaring**:
  - If `n` is even, reduce the problem to `x^(n/2) * x^(n/2)`.
  - If `n` is odd, adjust for the extra multiplication.
- This reduces the exponent size at each step, improving efficiency.

## Complexity
- **Time Complexity:** `O(log n)`, as the exponent is halved at each step.
- **Space Complexity:** `O(1)`, as we use only a few extra variables.
