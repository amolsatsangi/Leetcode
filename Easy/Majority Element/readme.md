# Majority Element

**Link to the problem:** [Majority Element](https://leetcode.com/problems/majority-element/description/)

## Intuition
The problem requires identifying an element that appears more than `n/2` times in an array. Since such an element dominates the array, it must either:
- Appear consistently as we traverse the array.
- Be centrally located if the array is sorted.

## Approach

### Approach 1: Boyer-Moore Voting Algorithm  
- Use a counter and a candidate element.
- If the counter is zero, choose the current element as the candidate.
- Increment or decrement the counter based on matches with the candidate.

### Approach 2: Hash Map  
- Use a hash map to count the frequency of each element.
- Return the element as soon as its count exceeds `n/2`.

### Approach 3: Sorting  
- Sort the array.  
- The majority element will always be at the middle index (`n/2`) due to its frequency.

## Complexity

- **Time Complexity:**  
  - Boyer-Moore Voting: `O(n)`  
  - Hash Map: `O(n)`  
  - Sorting: `O(n log n)`

- **Space Complexity:**  
  - Boyer-Moore Voting: `O(1)`  
  - Hash Map: `O(n)`  
  - Sorting: `O(1)` (excluding sort space requirements)
