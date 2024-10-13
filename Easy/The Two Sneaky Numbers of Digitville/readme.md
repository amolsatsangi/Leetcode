# Intuition
The problem is about finding the two sneaky numbers in an array, which means finding the two numbers that appear more than once. The solution involves comparing every number with the others to find the duplicate pairs.

# Approach
1. We use two nested loops to compare every element with every other element in the array.
2. The outer loop runs through each element, and the inner loop checks the remaining elements to see if there’s a duplicate.
3. If we find a pair of equal numbers, we add that number to the result.
4. This approach uses brute force to find the sneaky numbers.

# Complexity
- Time complexity: O(n^2), because for each number in the list, we are comparing it with every other number.
  
- Space complexity: O(1), excluding the space required for the answer, since we are not using any extra space apart from the output array.
