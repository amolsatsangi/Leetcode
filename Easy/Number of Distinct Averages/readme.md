# Number of Distinct Averages

## Intuition
The problem asks us to find the number of distinct averages when pairing the smallest and largest remaining numbers in an array. The key insight is that we need to:
1. Sort the array to easily access smallest and largest elements
2. Calculate averages of pairs (smallest, largest)
3. Count the number of distinct averages

## Approach
1. Sort the array in ascending order
2. Use two pointers - one starting from the beginning (for smallest elements) and one from the end (for largest elements)
3. Calculate the average of each pair and store it in a set to track distinct values
4. Return the size of the set as the answer

## Implementation Details
- We iterate through half of the array's length since we're taking pairs of elements
- For each iteration, we calculate the average of nums[i] and nums[n-i-1]
- We use a set to automatically handle tracking distinct averages

## Complexity
- Time complexity: **O(n log n)** 

- Space complexity: **O(n)**
 
