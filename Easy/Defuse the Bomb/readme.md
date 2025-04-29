# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This problem requires us to replace each element in the array with the sum of k elements after it (if k > 0) or before it (if k < 0). My first thought was to use a sliding window approach - for each position, we need to calculate the sum of specific k elements in a circular manner since the array can wrap around.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a result vector of the same size as the input array, initialized with zeros.
2. If k = 0, simply return the vector of zeros as required by the problem.
3. If k > 0:
   - For each index i in the array:
     - Calculate the sum of the next k elements in a circular manner.
     - To handle the circular nature, use modulo (%) operation when accessing elements.
     - Store this sum at index i in the result vector.
4. If k < 0:
   - For each index i in the array:
     - Calculate the sum of the previous |k| elements in a circular manner.
     - To handle elements before the start of the array, add the array size when the index becomes negative.
     - Store this sum at index i in the result vector.
5. Return the result vector.

# Complexity
- Time complexity: **O(n * |k|)**

- Space complexity: **O(n)**
