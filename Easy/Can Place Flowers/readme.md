# LeetCode Problem - Can Place Flowers

**Link to the problem:** [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75)

## Intuition
The problem requires determining whether it is possible to place `n` flowers in a flowerbed without violating the "no adjacent flowers" rule. My first thought was to iterate through the flowerbed array and check for valid spots where flowers can be placed without breaking the rule. 

## Approach
1. Traverse the flowerbed array while checking each position.
2. For each empty spot (`0`), verify that the adjacent positions are either outside the array bounds or also empty.
3. If a valid position is found, mark it as occupied and increase the count of placed flowers.
4. If the count reaches `n`, return `true`.
5. If the loop ends and `n` flowers have not been placed, return `false`.

## Complexity
- **Time complexity:** O(f), where `f` is the size of the flowerbed array, as we traverse the array once.
- **Space complexity:** O(1), as we are modifying the input array in place and using no extra space.
