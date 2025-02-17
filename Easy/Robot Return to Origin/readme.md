# LeetCode Problem - Robot Return to Origin

**Link to the problem:** [Robot Return to Origin](https://leetcode.com/problems/robot-return-to-origin/?envType=study-plan-v2&envId=programming-skills)

## Intuition
The problem requires checking if a sequence of moves brings a robot back to its starting position. Since each move affects the horizontal or vertical position, we need to ensure that movements in opposite directions cancel each other out.

## Approach
- Use counters to track movements in four directions: left (`L`), right (`R`), up (`U`), and down (`D`).
- Iterate through the move string and update the corresponding counter.
- The robot returns to the origin if the number of left and right moves are equal and the number of up and down moves are equal.

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the length of the moves string, since we iterate through it once.  
- **Space complexity:** \(O(1)\), as only a constant amount of extra space is used.
