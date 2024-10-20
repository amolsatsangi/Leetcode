# Intuition
The goal is to find how many stones are also jewels. We can iterate through each jewel and compare it with every stone. For every match, we increment the count.

# Approach
1. We initialize a sum to 0.
2. We use two nested loops: 
   - The outer loop iterates over each character in the `jewels` string.
   - The inner loop iterates over each character in the `stones` string.
3. For each character in `jewels`, we check if it matches any character in `stones`. 
   - If a match is found, we increment the sum.
4. After completing both loops, we return the total count of jewels found in stones.

# Complexity
- Time complexity: 
  - The time complexity is O(n * m), where `n` is the length of the `jewels` string and `m` is the length of the `stones` string, as each jewel is compared with every stone.

- Space complexity: 
  - The space complexity is O(1) because we are using a constant amount of extra space.
