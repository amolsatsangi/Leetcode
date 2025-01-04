# LeetCode Problem - Rotate String

**Link to the problem:** [Rotate String](https://leetcode.com/problems/rotate-string/description/)

---

## Solution 1

### Intuition
By concatenating the string `s` with itself, we create a string that contains all possible rotations of `s`. Checking if `goal` is a substring of this new string is a straightforward way to verify if `goal` is a valid rotation.

### Approach
1. If the sizes of `s` and `goal` are different, return `false`.
2. Concatenate `s` with itself to form `ss`.
3. Check if `goal` is a substring of `ss`.

### Complexity
- **Time complexity:** O(n + m), where `n` is the length of `s` and `m` is the length of `goal`.
- **Space complexity:** O(n), as a new string `ss` is created.

---

## Solution 2

### Intuition
By rotating `s` one character at a time and comparing it to `goal`, we can determine if `goal` is a valid rotation of `s`.

### Approach
1. If the sizes of `s` and `goal` are different, return `false`.
2. Iterate through the length of `s`.
3. For each rotation, create a new string by slicing `s` at different positions and compare it with `goal`.
4. Return `true` if a match is found; otherwise, return `false`.

### Complexity
- **Time complexity:** O(n^2), where `n` is the length of `s` (rotating the string and comparing take linear time, and this is repeated `n` times).
- **Space complexity:** O(n), as a new string `rotated` is created for each iteration.
