# Intuition
For each index `i`, the value at index `i` in the new array should be the value at index `nums[i]` in the original array.

# Approach
1. Initialize an empty array `ans` to store the result.
2. Iterate over the array `nums` using a for loop.
3. For each index `i`, append `nums[nums[i]]` to the `ans` array.
4. Return the result array `ans` after processing all elements.

The solution works by directly accessing the elements in the `nums` array using the indices provided by `nums` itself and building the result array accordingly.

# Complexity
- **Time complexity:**  
  O(n), where `n` is the size of the input array `nums`. 

- **Space complexity:**  
  O(n), since we are using an additional array `ans` to store the result, which has the same size as the input array `nums`.
