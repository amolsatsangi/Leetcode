# Smallest Range I

## Intuition
The problem asks us to minimize the range of an array after modifying each element by at most `k`. Intuitively, if we can bring the maximum down and the minimum up by `k`, the range will shrink. If the difference between the max and min is already less than or equal to `2k`, we can make all elements equal, resulting in a range of 0.

## Approach
1. Find the maximum and minimum values in the array.
2. Calculate the original range: `max - min`.
3. Subtract `2 * k` from the range, since we can reduce the range by moving the max down and the min up.
4. If the result is negative, return 0 (since range can't be negative).
5. Otherwise, return the reduced range.

## Complexity
- **Time complexity:** $$O(n)$$  
  

- **Space complexity:** $$O(1)$$  
