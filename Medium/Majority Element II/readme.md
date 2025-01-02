# Majority Element II

**Link to the problem:** [Majority Element II](https://leetcode.com/problems/majority-element-ii/description/)

## Intuition
The problem asks us to find all elements that appear more than `n/3` times in the array. My initial thought was to count the frequency of each element and identify those that satisfy this condition.

## Approach
1. Use a hash map to count the frequency of each element in the array.
2. Iterate through the map to find elements whose frequency is greater than `n/3`, where `n` is the size of the array.
3. Store these elements in a result list and return it.

## Complexity
- **Time complexity:** O(n)  
   Iterating through the array to count elements and then iterating through the hash map to check conditions are both linear operations.

- **Space complexity:** O(n)  
   The hash map requires additional space proportional to the number of distinct elements in the array.
