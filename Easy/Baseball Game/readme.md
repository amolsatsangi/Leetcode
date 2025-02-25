# LeetCode Problem - Baseball Game

**Link to the problem:** [Baseball Game](https://leetcode.com/problems/baseball-game/description/?envType=study-plan-v2&envId=programming-skills)

## Intuition
The problem requires simulating a baseball game where operations modify the score history. Using a stack-like structure (vector) helps efficiently process operations while maintaining the sequence of scores.  

## Approach
- Use a vector to store valid scores.  
- Iterate through the operations list:
  - If the operation is a number, convert and store it.  
  - If `"+"`, push the sum of the last two scores.  
  - If `"D"`, push double the last score.  
  - If `"C"`, remove the last score.  
- Finally, compute the sum of all valid scores.  

## Complexity
- **Time complexity:** O(n), where \(n\) is the number of operations, since each operation is processed once.  
- **Space complexity:** O(n), as extra space is used to store the scores.  
