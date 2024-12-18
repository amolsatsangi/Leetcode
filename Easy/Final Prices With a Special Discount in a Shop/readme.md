# Final Prices With a Special Discount in a Shop

**Problem Link:** [Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/)

## Intuition
The problem requires calculating the discounted prices for items in a shop. My initial thought was to iterate through the prices and find the first subsequent price that is less than or equal to the current price to apply the discount. This approach ensures we follow the problem constraints effectively.

## Approach
For each price in the list:
1. Use a nested loop to find the first subsequent price that is less than or equal to the current price.
2. Subtract this value from the current price to apply the discount.
3. Continue to the next price until all discounts are processed.

This straightforward approach ensures that the problem requirements are met.

## Complexity
- **Time Complexity:** \(O(n^2)\) in the worst case, where \(n\) is the number of items in the `prices` array. Each price may require iterating through the remaining items.
- **Space Complexity:** \(O(1)\) since no additional space is used apart from the input array.
