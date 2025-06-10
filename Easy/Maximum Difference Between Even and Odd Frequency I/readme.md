# Maximum Difference Between Even and Odd Frequency I

## Intuition
Group identical characters and track their frequencies. Compare the highest odd frequency with the lowest even frequency.

## Approach
1. Sort the string to group characters.
2. Count frequencies of each character.
3. Track the maximum odd frequency and minimum even frequency.
4. Return the difference: `max_odd - min_even`.

## Complexity
- **Time complexity:** $$O(n \log n)$$ (due to sorting)
- **Space complexity:** $$O(1)$$ (constant extra space)

