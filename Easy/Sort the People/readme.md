# Sort the People

**Link to the problem:** [Sort the People](https://leetcode.com/problems/sort-the-people/description/)

## Intuition
The problem requires sorting names based on the heights of individuals in descending order. Since heights and names are paired, the task can be approached by maintaining their mapping and leveraging a sorting function to order the heights.

## Approach
1. Use a hash map to store the mapping between heights and names.
2. Sort the heights array in descending order.
3. Iterate through the sorted heights and construct the result list by retrieving corresponding names from the hash map.

## Complexity
- **Time complexity:**  
  Sorting the heights takes O(n *log n), and iterating through the heights is O(n). Overall complexity is O(n *log n).

- **Space complexity:**  
  Storing the hash map requires O(n) additional space.
