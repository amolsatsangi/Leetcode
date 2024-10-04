# Intuition
The problem requires moving all zeroes to the end while maintaining the relative order of non-zero elements. We can achieve this in-place by swapping zeroes with the next non-zero element.

# Approach
1. Use two pointers, `i` and `j`. Pointer `i` scans for zeroes, while `j` finds the next non-zero element.
2. When `nums[i]` is zero, increment `j` to locate the next non-zero element, then swap `nums[i]` and `nums[j]`.
3. Repeat until all non-zero elements are shifted left, and zeroes are moved to the end.

# Complexity
- Time complexity: O(n), where `n` is the size of the array, as each element is processed once.
- Space complexity: O(1), as the operation is done in-place.
