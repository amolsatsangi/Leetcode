# Longest Consecutive Sequence

**Link to the problem:** [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/description/)

## Intuition
The problem requires finding the length of the longest consecutive elements sequence in an unsorted array. My initial thought was to use either sorting or hashing techniques to efficiently track sequences of consecutive numbers.

## Approach
### Solution 1: Hash Set
- Use an unordered set to store all elements for O(1) lookup.
- For each element, check if it's the start of a sequence (i.e., `element - 1` is not in the set).
- Traverse consecutive numbers starting from the current element and keep track of the count.
- Update the maximum length if the current sequence is longer.

### Solution 2: Sorting
- Sort the array, which ensures elements are in consecutive order if they exist.
- Traverse the array, maintaining a count of consecutive elements.
- Skip duplicate elements to avoid incorrect counts.
- Update the maximum length whenever the sequence ends.

### Solution 3: Ordered Set
- Use a `set` to store elements in sorted order.
- Traverse the sorted set while counting consecutive elements.
- Reset the count whenever a gap is detected, and update the maximum length accordingly.

## Complexity
### Solution 1: Hash Set
- **Time complexity:** O(n), where `n` is the number of elements. Insertion and lookup in a hash set are O(1), and each element is processed once.
- **Space complexity:** O(n) for storing elements in the hash set.

### Solution 2: Sorting
- **Time complexity:** O(n log n), where `n` is the number of elements due to sorting.
- **Space complexity:** O(1) if sorting in-place, otherwise O(n) for additional memory usage by the sort function.

### Solution 3: Ordered Set
- **Time complexity:** O(n log n), where `n` is the number of elements due to insertion and traversal of the ordered set.
- **Space complexity:** O(n) for storing elements in the set.
